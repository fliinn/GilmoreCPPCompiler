/*	Header file for helper funcs for
 *	Max Gilmore's 120++ compiler
*/
#ifndef TOKENFUNCS_H_
#define TOKENFUNCS_H_
#include<stdio.h>
#include"token.h"


//Prints out all data fields of token
void printToken( token *t ) {

    if( t == NULL ) return;
    printf("%*i%*.*s%*i%*s", 3, t->category, 24, 24, t->text, 
                            4, t->lineno, 20, t->filename );
    if( t->ival != -1 ) {

    } else if( t->sval != NULL ) {

        printf(" %s", t->sval );
    }
    printf("\n");
}

//Adds token to end of list
void addNode( list *head, table *h ) {

    list *newNode = calloc(1, sizeof(list));
    newNode->data = h;
    newNode->next = NULL;

    if( newNode == NULL ) {

        fprintf( stderr, "Unable to create new node\n" );
        exit(-1);
    }

    if( head->data == NULL ) head->data = h;
    else {

        list *temp = head;
        while( temp->next != NULL ) {

            temp = temp->next;
        }
        temp->next = newNode;
    }
}
#endif