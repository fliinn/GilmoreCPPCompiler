/*  Max Gilmore
 *  Source file for hash.h
 *  Hash table implementation 
 *  for 120++ compiler
 */

/* Hash table design inspired by tonious
 * https://gist.github.com/tonious/1377667
 */
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<limits.h>

#include"sym.h"
#include"token.h"
#include"stdbool.h"

// Create a table entry to be inserted into a table
struct tableEntry *createEntry(void *data, char *key, enum type nodeType) {
    
    // Check if values exist before trying to use them
    if(key == NULL || data == NULL) {
        
        fprintf(stderr, "in createEntry, one or more values are NULL");
        return NULL;
    }
    tableEntry *newEntry;
    if(( newEntry = calloc(1,sizeof(struct table))) == NULL ) return NULL;
    newEntry->data = data;
    newEntry->key = key;
    newEntry->nodeType = nodeType;
    newEntry->next = NULL;
    return newEntry;
}

// Create a table structure based on name and size
struct table *createTable(char *name, size_t size) {
    
    // Check if size is a reasonable number
    if( size < 2 ) {
        
        fprintf(stderr, "Error initializing table: table size less than 2\n");
        return NULL;
    }
    table *newTable;
    if(( newTable = calloc(1, sizeof(struct table))) == NULL ) return NULL;
    newTable->size = size;
    newTable->numChildren = 0;
    newTable->name = strdup(name);
    if(( newTable->tableItems = calloc(size, sizeof(tableEntry*))) == NULL ) return NULL;

    return newTable;
}

// Inserts data into the table
int entryInsert(struct table *self, struct tableEntry *child){
    
    int hashnum;
    tableEntry *newnode = NULL;
    tableEntry *next = NULL;
    tableEntry *last = NULL;
    
    // Check if table and child are void
    if( self == NULL ) {
        fprintf(stderr, "entryInsert: hash table does not exist.\n");
        return 0;
    }
    if( child == NULL ) {
        fprintf(stderr, "entryInsert: key to be inserted is empty.\n");
        return 0;
    }
    
    // Hash the key find the first empty node in the open table entry
    hashnum = hashFunction( self->size, child->key );
    next = self->tableItems[hashnum];
    while(1) {
        if(next == NULL || next == 0) break;
        if(next->key == NULL) break;
        if(strcmp(child->key,next->key) != 0) {
            
            last = next;
            next = next->next;
        // If key already exists in table, exit out
        } else if(strcmp(child->key,next->key) == 0) {
            return 0;
        }
    }
  
    self->tableItems[hashnum] = child;
}

// Inserts a subtable into the table
int tableInsert(struct table *self, struct table *child) {
    
    int hashnum;
    table *newnode = NULL;
    tableEntry *next = NULL;
    tableEntry *last = NULL;
    
    // Check if table and key are void
    if( self == NULL ) {
        fprintf(stderr, "tableInsert: hash table does not exist.\n");
        return 0;
    }
    if( child == NULL ) {
        fprintf(stderr, "tableInsert: child to be inserted is empty.\n");
        return 0;
    }
    // Hash the key to find the first empty node in the open table entry
    hashnum = hashFunction( self->size, child->name );
    next = self->tableItems[hashnum];
    while(1) {
        if(next == NULL || next == 0) break;
        if(next->key == NULL) break;
        if(strcmp(child->name, next->key) != 0) {
            
            last = next;
            next = next->next;
        // If key already exists in table, exit out
        } else if(strcmp(child->name, next->key) == 0) {
            return 0;
        }
    }
    
    return 1;
}

// Returns true if specific key is found in the table
bool entryLookup(struct table *self, char *key) {
    
    int index;
    tableEntry *slot;
    if( self == NULL ) {
        
        fprintf(stderr,"symtab_lookup: table doesn't exit.\n");
        return NULL;
    }
    for(int i = 0; i < self->size; i++) {
        
        index = hashFunction(self->size, key);
        slot = self->tableItems[index];
        if( slot == NULL ) return false;
        else if( strcmp( key, slot->key ) != 0 ) return true;
    }
    return false;

/*
    if( self == NULL ) {
        
        fprintf(stderr,"symtab_lookup: table doesn't exit.\n");
        return NULL;
    }
    symtab_node *checknode;
    if(!malloc(sizeof(symtab_node))) {
        
        fprintf(stderr, "symtab_lookup: malloc failed, exiting now\n");
        exit(1);
    }
    symtab_node *next = NULL;
    int hashnum = hash_function( self->size, key );
    
    if( self->table[hashnum] == NULL ) return false;
    checknode->value = self->table[hashnum];
    while( checknode != NULL ) {
        
        if( strcmp( key, checknode->key )) return true;
        checknode = checknode->next;
    }
    return false;
*/
}

int tableDeleteNode(struct table *self, char *key) {
    
    if( self == NULL ) {
        
        fprintf(stderr, "In func delete_node, self is null.\n");
        return 0;
    }
    tableEntry *last = NULL;
    tableEntry *current = NULL;
    int hashnum = hashFunction( self->size, key );
    
    current = self->tableItems[hashnum];
    //Check if node is NULL
    if( current == NULL ) {
        
        fprintf(stderr, "Node %s not found. Returning now.\n", key);
        return 0;
    //Check if first node is our search value
    } else if( strcmp( key, current->key )) {
        
        self->tableItems[hashnum] = current->next;
        free( current );
        return 0;
    //Else iterate through and check nodes until end or you find it
    } else {
        
        while( current != NULL ) {
            
            if( strcmp( key, current->key )) {
                
                last->next = current->next;
                free( current );
                return 0;
            }
            last = current;
            current = current->next;
        }
    }
    return -1;
}

//Attempts to delete a hash table and all entries
void tableFreeTree(struct table *self) {
    
    struct tableEntry *slot;
    for( int i = 0; i < self->size; i++ ) {
        
        slot = self->tableItems[i];
        while( slot ) {
                
            self->tableItems[i] = slot->next;
            free(slot->data);
            free(slot->key);
            free(slot);
            slot = self->tableItems[i];
        }
    }
    free(self->tableItems);
    free(self);
}

// Print table name and all children, recursing through child tables
void printTable(struct table *tab, int depth) {
    
    // List of potential temp variables
    int x1;
    double x2;
    char *x3;

    tableEntry **tempnode;
    token *temptoken;

    // NULL check on the table, if not then check node type of each entry
    table *temptable = tab;
    if(temptable == NULL) return;
    tempnode = temptable->tableItems;
    printf("%*s Table name is %s:\n", depth*2, " ", tab->name);
    
    for( int i = 0; i < tab->size; i++ ) {
        
        if(!(tempnode[i] == 0 || tempnode[i]->key == NULL)) {
            
            temptoken = tempnode[i]->data;
            switch(tempnode[i]->nodeType) {
                
                // If a FUNCTION or CLASS, value will contain a symtab
                case FUNCTION_TYPE:
                case CLASS_TYPE:
                    printTable(tempnode[i]->data, depth+2);
                    break;
                    
                // If a base value type, print out its token value
                case INT_TYPE:
                    x1 = temptoken->ival;
                    printf("%*s %s = %i\n", depth*2, " ", tempnode[i]->key, x1);
                    break;
                case IARRAY_TYPE:
                    break;
                case DOUBLE_TYPE:
                    x2 = temptoken->ival;
                    printf("%*s %s = %f\n", depth*2, " ", tempnode[i]->key, x2);
                    break;
                case DARRAY_TYPE:
                    break;
                case CHAR_TYPE:
                    x3 = temptoken->sval;
                    printf("%*s %s = %c\n", depth*2, " ", tempnode[i]->key, x3[1]);
                    break;
                case STRING_TYPE:
                    x3 = temptoken->sval;
                    printf("%*s %s = %s\n", depth*2, " ", tempnode[i]->key, x3);
                    break;
                case BOOL_TYPE:
                    x1 = temptoken->ival;
                    if(x1) printf("%*s %s = true\n", depth*2, " ", tempnode[i]->key);
                    else printf("%*s %s = false\n", depth*2, " ", tempnode[i]->key);
                    break;
                case VOID_TYPE:
                    printf("%*s NULL\n", depth*2, " ");
                    break;
                default: break;
            }
        }
    }
}

// Simple hash function provided by tonious
int hashFunction(int size, char *key) {
    
    unsigned long int hashval = 0;
    
    for( int i = 0; hashval < ULONG_MAX && i < strlen( key ); i++) {
        
        hashval = hashval << 8;
        hashval += key[i];

    }
    return hashval % size;
}

bool keyCompare(char *key1, char *key2);