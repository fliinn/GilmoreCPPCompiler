#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "tree.h"
#include "sym.h"
#include "120gram.tab.h"
#include "type.h"

extern int nerrors;
extern struct table *globalTable;
extern void yyerror(char *s);

void error( char *s, tree *t );
void warn( char *s, tree *t );
char *getFuncname( tree *t );
void populatesymbols(tree *t);
void populateDecls(tree *t, table *scope);

/*
 * An error function during a tree traversal will typically occur
 * at some particular tree node. But to report it, compiler will
 * have to map back to some source location, given by some token.
 */

// Function to create a scope table and insert it into the global_table
// Returns NULL if the identifier is already in the table
void error(char *s, tree *t)
{
   while (t->prodrule < 0 && t->child[0]->nkids > 0) t = t->child[0];
   yylval = t;
   yyerror(s);
}

void warn(char *s, tree *t)
{
   char tmp[128];
   sprintf(tmp, "warning: %s", s);
   error(tmp, t);
   //nerrors--; /* since yyerror() in this example would increment nerrors */
}

/*
 * given a (sub)tree for some function header, find its name.
 * Different subtree shapes will have the identifier in different spots.
 * Can walk the tree via recursion, but this function updates "t" locally
 * and iterates.
 */
char *getFuncname(tree *t) {

    tree *temp;
    int seenfunc = 0;
    while(1) {
        switch(t->prodrule) {
            case IDENTIFIER:
                if(seenfunc) return t->leaf->sval;
                return NULL;
            case DECLARATOR:
                warn("Pointers not implemented", t);
                temp = t->child[1];
                break;
            case DIRECT_DECL1:
            case DIRECT_DECL2:
            case DIRECT_DECL3:
            case DIRECT_DECL4:
                warn("arrays not allowed in function headers", t);
                return NULL;
            case DIR_CLASS_DECL1:
            case DIR_CLASS_DECL2:
            case DIR_CLASS_DECL3:
                seenfunc = 1;
                temp = t->child[0];
                break;
            default:
                fprintf(stderr, "error occurred on tree %i: ", t->prodrule);
                error("get_funcname called on non-functiony subtree", t);
                return NULL;
        }
    }
}

/*
 * Inserts parameters into the global symbol table based
 * on whether or not the production rule is a class declaration.
 * Creates scope table as element of global table if it doesn't
 * exist, otherwise exits out with an error.
 */
void populateTable(tree *t, table *scope) {

    token *temptoken;
    table *newScope;
    if(t==NULL) return;
    
    // 
    for(int i = 0; i < t->nkids; i++) {
        switch(t->prodrule) {
/*
            case FUNC_DEF1:
                scope = createScope(t->child[0]->child[0]->leaf->text);
                symtabInsert(global_table, scope->name, scope, FUNCTION_TYPE);
                populateTable(t, scope);
                break;
            case FUNC_DEF2:
                scope = createScope(t->child[1]->child[0]->leaf->text);
                symtabInsert(global_table, scope->name, scope, FUNCTION_TYPE);
                populateTable(t, scope);
                break;
            case CLASS_SPEC:
            case CLASS_HEAD1:
                scope = createScope(t->child[0]->child[1]->leaf->text);
                symtabInsert(global_table, scope->name, scope, CLASS_TYPE);
                populateTable(t, scope);
                break;
            case CLASS_HEAD2:
            case CLASS_HEAD3:
                scope = createScope(t->child[0]->child[2]->leaf->text);
                symtabInsert(global_table, scope->name, scope, CLASS_TYPE);
                populateTable(t, scope);
                break;
            case SIMPLE_TYPE_NESTED:
                break;
*/
            case DIRECT_DECL1:
            case DIRECT_DECL2:
            case DIRECT_DECL3:
            case DIRECT_DECL4:
                newScope = createTable(t->child[0]->leaf->text, 43);
                tableInsert(scope, newScope);
                populateTable(t->child[1], newScope);
            case DECL_SEQ:
                populateTable(t->child[0], scope);
                populateTable(t->child[1], scope);
                break;
            case DECL_SPEC_INIT:
                
                switch(t->child[0]->prodrule) {
                    
                    case CHAR:
                        if(t->child[1]->child[1]->child[1]->prodrule == 0) {

                            temptoken = calloc(1, sizeof(struct token));
                            temptoken->sval = '\0';
                            entryInsert(scope, createEntry(temptoken,
                                    t->child[1]->child[0]->leaf->text, CHAR_TYPE));
                        } else {
                            
                            entryInsert(scope, createEntry(
                                    t->child[1]->child[1]->child[1]->leaf,
                                    t->child[1]->child[0]->leaf->text, CHAR_TYPE));
                        }
                        break;
                        
                    case WCHAR_T:
                        warn("wide char not supported", t->child[1]->child[0]);
                        break;
                        
                    case BOOL:
                        break;
                        
                    case SHORT:
                        if(t->child[1]->child[1]->child[1]->prodrule == 0) {

                            temptoken = calloc(1, sizeof(struct token));
                            temptoken->ival = 0;
                            entryInsert(scope, createEntry(temptoken,
                                    t->child[1]->child[0]->leaf->text, INT_TYPE));
                        } else {
                            
                            entryInsert(scope, createEntry(
                                    t->child[1]->child[1]->child[1]->leaf,
                                    t->child[1]->child[0]->leaf->text, INT_TYPE));
                        }
                        break;
                        
                    case INT:
                        if(t->child[1]->child[1] == 0) {

                            temptoken = calloc(1, sizeof(struct token));
                            temptoken->ival = 0;
                            entryInsert(scope, createEntry(temptoken,
                                    t->child[1]->child[0]->leaf->text, INT_TYPE));
                        } else {
                            
                            entryInsert(scope, createEntry(
                                    t->child[1]->child[1]->child[1]->leaf,
                                    t->child[1]->child[0]->leaf->text, INT_TYPE));
                        }
                        break;
                        
                    case LONG:
                        break;
                    case SIGNED:
                        warn("signed and unsigned not supported in 120++", t->child[1]->child[0]);
                        break;
                    case FLOAT:
                    case DOUBLE:
                        if(t->child[1]->child[1]->child[1]->prodrule == 0) {

                            temptoken = calloc(1, sizeof(struct token));
                            temptoken->ival = 0;
                            entryInsert(scope, createEntry(temptoken,
                                    t->child[1]->child[0]->leaf->text, DOUBLE_TYPE));
                        } else {
                            
                            entryInsert(scope, createEntry(
                                    t->child[1]->child[1]->child[1]->leaf,
                                    t->child[1]->child[0]->leaf->text, DOUBLE_TYPE));
                        }

                }
                for(int j = 0; j < t->child[i]->nkids; j++) 
                    populateTable(t->child[i]->child[j], scope);
                break;
            default:
                populateTable(t->child[i], scope);
                break;
        }
    }
}

/*
 * Find local declarations in a compound statement.
 * Illustrates a more general tree traversal that calls a
 * more specific (helper) tree traversal when it finds an
 * subtree type of interest (DECLARATION triggers populatesymbols).
 */
void populateDecls(tree *t, table *scope) {
    
/*
    if(t==NULL) return;
    switch(t->prodrule) {
        case DIRECT_DECL1:
        case DIRECT_DECL2:
        case DIRECT_DECL3:
        case DIRECT_DECL4:
            if( t->child[1] != 0 ) tableInsert(scope, t->child[1]->leaf->text, t->child[1]->leaf, FUNCTION_TYPE);
            break;
        case DIR_CLASS_DECL1:
            if( t->child[1] != 0 ) tableInsert(scope, t->child[1]->leaf->text, t->child[1]->leaf, CLASS_TYPE);
            break;
        case DIR_CLASS_DECL2:
        case DIR_CLASS_DECL3:
            t = t->child[3];
            while(t != NULL) {
                if( t->child[1] ) {

                    tableInsert(scope, t->child[1]->leaf->text, t->child[1]->leaf, CLASS_TYPE);
                } else tableInsert(scope, t->child[0]->leaf->text, t->child[1]->leaf, CLASS_TYPE);
                t = t->child[0];
            }
            break;
    }
*/

/*
    while(1) {
        switch(t->prodrule) {
            case COMPOUND: return;
            
        }
    }
*/
}
/*
 * A more specialized tree traversal, only called in a known subset of
 * the tree, it is still written to recurse on children so it can skip
 * over enclosing non-terminal nodes and trigger on two production rules
 * for function definition, and one production rule for declarations.
 * In these cases, it will call helper functions like get_funcname(),
 * and perform symbol table insertions. Since functions have local
 * scopes, they must be traversed and their symbols inserted into new
 * symbol tables.  Global variable "current" tracks the current scope.
 */
void populatesymbols(tree *t)
{

}

void populate_init_declarators(tree *t)
{
   
}

void checkdeclared(tree *t)
{
   

}
