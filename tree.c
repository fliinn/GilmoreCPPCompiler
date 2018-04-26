/*
 * Source file for treeFuncs.h
 */
#include<string.h>
#include<stdio.h>
#include"tree.h"
#include"sym.h"
#define getName(var) #var

extern token *yy_token;

struct tree *alctree(int label, short nkids, ...) {

    int i;
    va_list ap;
    struct tree *t = calloc(1, sizeof (struct tree) +
            (nkids - 1) * sizeof (struct tree*));
    if (t == NULL) {

        fprintf(stderr, "alctree out of memory\n");
        exit(1);
    }
    t->prodrule = label;
    t->nkids = nkids;
    if (nkids > 0 && nkids <= 9) {
        
        va_start(ap, nkids);            //free(ptr->leaf);
        for (i = 0; i < nkids; i++) {
            t->child[i] = va_arg(ap, struct tree*);
        }
        va_end(ap);
        t->child[nkids] = calloc(9-nkids, sizeof(struct tree*));
    } else if (nkids == -1) { //Special case for terminals to set their leaf token

        nkids = 1;
        va_start(ap, nkids);
        t->leaf = va_arg(ap, struct token*);
        va_end(ap);
        //for(i = 1; i < 9; i++) t->child[i] = NULL;
    }
    return t;
}

int printTree(struct tree *t, int depth) {
    
    if(t==NULL) {
        
        printf("%*s node is empty.\n", depth*2, " ");
    } else if( t->nkids == -1 ) {
        
        if((t->leaf != NULL) && (t->leaf->text != NULL)) printf("%*s leaf: %s\n", depth*2, " ", t->leaf->text);
        else printf("%*s leaf: %i\n", depth*2, " ", t->prodrule);
    } else if( t->nkids >= 0 ) {
        
        printf("%*s %i: %hi\n", depth*2, " ", t->prodrule, t->nkids);
        for (int i = 0; i < t->nkids; i++) {

            printTree(t->child[i], depth + 1);
        }
    } else {
        printf("Unknown error occurred inside printTree, exiting now.");
        exit(1);
    }
}