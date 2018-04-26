// tree.h, tree struct header file and related functions
#ifndef TREE_H_
#define TREE_H_
#include<stdarg.h>
#include<stdlib.h>
#include"token.h"

typedef struct tree {
    
    int prodrule;
    short int nkids;
        
    struct token *leaf;
    struct tree *child[9];

} tree;

struct tree *alctree(int label, short nkids, ...);
int printTree(struct tree *t, int depth);

#endif