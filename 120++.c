/*	Max Gilmore
 **	Main file for my compiler program
 **	CS 445
 **	Relies on: token.h, tokenFuncs.c 
 **     Currently implemented: scanner + parser
 */

#define getName(var) #var

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#include"ytab.h"
#include"token.h"
#include"sym.h"
#include"semantic.h"
#include"type.h"

extern FILE *yyin;
extern int yylex();
extern int unsupported_error;

struct tree *globalTree;
struct table *globalTable;                     
struct list *tableList;

int undecl_errors = 0;
char *fileName;

// Function Declaration
int parseFile();

int main(int argc, char *argv[]) {

    yydebug = 0;
    int yval = 0;
    
    // Init global symbol table
    globalTable = createTable("global_table", 43);
    
    //Exit out if no args
    if (argc < 2) {

        printf("No arguements, exiting now.\n");
    } else {

        for (int i = 1; i < argc; i++) {

            fileName = strdup(argv[i]);
            if ((yyin = fopen(argv[i], "r")) == NULL) {

                printf("Can't open %s\n", *argv);
                exit(1);
            }
            yval = parseFile();
        }
        
    }
}

// Main parse function, runs yyparse() and semantic action functions
int parseFile() {
    
    int val;
    val = yyparse();
    if( unsupported_error ) { //If there are unsupported tokens, exit out
        
        printf("%i unsupported option errors occurred, exiting now.\n", unsupported_error );
        return 0;
    }
    if( globalTree == NULL ) fprintf(stderr,"global_tree is empty.\n");
    else {
        
        //printf("Resulting bison parse tree: \n");
        printTree( globalTree, 0 );
        populateTable(globalTree, globalTable);
        printTable(globalTable, 0);
    }
    return val;
}