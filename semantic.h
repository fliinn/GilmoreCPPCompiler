/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   semantic.h
 * Author: osboxes
 *
 * Created on October 16, 2017, 5:26 PM
 */

#ifndef SEMANTIC_H
#define SEMANTIC_H

#include"tree.h"
#include"sym.h"

struct table *createScope( char *name );
void error(char *s, tree *t);
void warn(char *s, tree *t);
char *getFuncname(tree *t);
void populateTable(tree *t, table *tab);
void populateDecls(tree *t, table *scope);

#endif /* SEMANTIC_H */

