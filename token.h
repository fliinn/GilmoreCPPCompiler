/*	token.h
**	Header file for the token struct
**	and related structs, such as the
**	linked list for the tokens.
*/
#ifndef TOKEN_H_
#define TOKEN_H_

#include<stdlib.h>

#include"sym.h"

//Token Declaration
typedef struct token {

	int category;
	char *text;
	int lineno;
	char *filename;
	double ival;
	char *sval;
} token;

//Linked list Declaration
typedef struct list{

	struct table *data;
	struct list *next;
} list;
#endif
