/*
 * max Gilmore
 * treeFuncs.h, header for treeFuncs
 */

#ifndef TREEFUNCS_H
#define TREEFUNCS_H

#include<stdio.h>
#include<stdarg.h>
#include<stdlib.h>
#include"tree.h"

struct tree *alctree(int label, short nkids, ...);
int printTree(struct tree *t, int depth);

#endif /* TREEFUNCS_H */