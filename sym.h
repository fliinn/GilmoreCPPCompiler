/*  Max Gilmore
 *  Header file for hash.c
 */

#ifndef HASH_H
#define HASH_H
#include<stdbool.h>
#include"type.h"
#include"token.h"

// Individual data node within the symbol table
typedef struct tableEntry {
    
    void *data;
    char *key;
    enum type nodeType;
    struct tableEntry *next;
} tableEntry;

// Main symbol table structure
typedef struct table {
    
    struct tableEntry **tableItems;
    struct table **tableChildren;
    size_t size, numChildren;
    char *name;
} table;

struct table *symtabInit(int size, char *name);

struct tableEntry *createEntry(void *data, char *key, enum type nodeType);
struct table *createTable(char *name, size_t size);
int entryInsert(struct table *self, struct tableEntry *child);
int tableInsert(struct table *self, struct table *child);

bool entryLookup(struct table *self, char *key);
int tableDeleteNode(struct table *self, char *key);
void tableFreeTree(struct table *self);
void printTable(struct table *, int depth);

int hashFunction(int size, char *key);
bool keyCompare(char *key1, char *key2);
#endif /* HASH_H */