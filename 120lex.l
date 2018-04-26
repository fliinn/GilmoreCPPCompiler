/*	$Id: lexer.l,v 1.2 1997/11/19 15:13:15 sandro Exp $	*/

/*
 * Copyright (c) 1997 Sandro Sigala <ssigala@globalnet.it>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
 * IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
 * IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
 * NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * ISO C++ lexical analyzer.
 *
 * Based on the ISO C++ draft standard of December '96.
 */

%{
#define YYDEBUG 1
    
#include <ctype.h>
#include <stdio.h>

#include "token.h"
#include "tree.h"
#include "120gram.tab.h"
#include "sym.h"
//#include "parser.h"

extern int yylex();
extern char *fileName;
extern void addNode();
extern token *initToken();
extern table *globalTable;

int lineno = 0;
int saw_iostream, saw_string, saw_std, saw_cstdlib; 
int saw_ctime, saw_cmath, saw_iomanip;
int yy_add( int i );
char *yy_format( char *t );

static int yywrap(void);
static void skip_until_eol(void);
static void skip_comment(void);
static int check_identifier(char *);
int typenametable_insert(char *s, int cat);
%}

intsuffix				([uU][lL]?)|([lL][uU]?)
fracconst				([0-9]*\.[0-9]+)|([0-9]+\.)
exppart					[eE][-+]?[0-9]+
floatsuffix				[fFlL]
chartext				([^'])|(\\.)
stringtext				([^"])|(\\.)

%%

"\n"					{ ++lineno; }
[\t\f\v\r ]+				{ /* Ignore whitespace. */ }

"/*"					{ skip_comment(); }
"//"					{ skip_until_eol(); }

"{"					{ return yy_add('{'); }
"<%"					{ return yy_add('{'); }
"}"					{ return yy_add('}'); }
"%>"					{ return yy_add('}'); }
"["					{ return yy_add('['); }
"<:"					{ return yy_add('['); }
"]"					{ return yy_add(']'); }
":>"					{ return yy_add(']'); }
"("					{ return yy_add('('); }
")"					{ return yy_add(')'); }
";"					{ return yy_add(';'); }
":"					{ return yy_add(':'); }
"..."					{ return yy_add(ELLIPSIS); }
"?"					{ return yy_add('?'); }
"::"					{ return yy_add(COLONCOLON); }
"."					{ return yy_add('.'); }
".*"					{ return yy_add(DOTSTAR); }
"+"					{ return yy_add('+'); }
"-"					{ return yy_add('-'); }
"*"					{ return yy_add('*'); }
"/"					{ return yy_add('/'); }
"%"					{ return yy_add('%'); }
"^"					{ return yy_add('^'); }
"xor"					{ return yy_add('^'); }
"&"					{ return yy_add('&'); }
"bitand"				{ return yy_add('&'); }
"|"					{ return yy_add('|'); }
"bitor"					{ return yy_add('|'); }
"~"					{ return yy_add('~'); }
"compl"					{ return yy_add('~'); }
"!"					{ return yy_add('!'); }
"not"					{ return yy_add('!'); }
"="					{ return yy_add('='); }
"<"					{ return yy_add('<'); }
">"					{ return yy_add('>'); }
"+="					{ return yy_add(ADDEQ); }
"-="					{ return yy_add(SUBEQ); }
"*="					{ return yy_add(MULEQ); }
"/="					{ return yy_add(DIVEQ); }
"%="					{ return yy_add(MODEQ); }
"^="					{ return yy_add(XOREQ); }
"xor_eq"				{ return yy_add(XOREQ); }
"&="					{ return yy_add(ANDEQ); }
"and_eq"				{ return yy_add(ANDEQ); }
"|="					{ return yy_add(OREQ); }
"or_eq"					{ return yy_add(OREQ); }
"<<"					{ return yy_add(SL); }
">>"					{ return yy_add(SR); }
"<<="					{ return yy_add(SLEQ); }
">>="					{ return yy_add(SREQ); }
"=="					{ return yy_add(EQ); }
"!="					{ return yy_add(NOTEQ); }
"not_eq"				{ return yy_add(NOTEQ); }
"<="					{ return yy_add(LTEQ); }
">="					{ return yy_add(GTEQ); }
"&&"					{ return yy_add(ANDAND); }
"and"					{ return yy_add(ANDAND); }
"||"					{ return yy_add(OROR); }
"or"					{ return yy_add(OROR); }
"++"					{ return yy_add(PLUSPLUS); }
"--"					{ return yy_add(MINUSMINUS); }
","					{ return yy_add(','); }
"->*"					{ return yy_add(ARROWSTAR); }
"->"					{ return yy_add(ARROW); }

"asm"					{ return yy_add(ASM); }
"auto"					{ return yy_add(AUTO); }
"bool"					{ return yy_add(BOOL); }
"break"					{ return yy_add(BREAK); }
"case"					{ return yy_add(CASE); }
"catch"					{ return yy_add(CATCH); }
"char"					{ return yy_add(CHAR); }
"class"					{ return yy_add(CLASS); }
"const"					{ return yy_add(CONST); }
"const_cast"				{ return yy_add(CONST_CAST); }
"continue"				{ return yy_add(CONTINUE); }
"default"				{ return yy_add(DEFAULT); }
"delete"				{ return yy_add(DELETE); }
"do"					{ return yy_add(DO); }
"double"				{ return yy_add(DOUBLE); }
"dynamic_cast"				{ return yy_add(DYNAMIC_CAST); }
"else"					{ return yy_add(ELSE); }
"enum"					{ return yy_add(ENUM); }
"explicit"				{ return yy_add(EXPLICIT); }
"export"				{ return yy_add(EXPORT); }
"extern"				{ return yy_add(EXTERN); }
"false"					{ return yy_add(FALSE); }
"float"					{ return yy_add(FLOAT); }
"for"					{ return yy_add(FOR); }
"friend"				{ return yy_add(FRIEND); }
"goto"					{ return yy_add(GOTO); }
"if"					{ return yy_add(IF); }
"inline"				{ return yy_add(INLINE); }
"int"					{ return yy_add(INT); }
"long"					{ return yy_add(LONG); }
"mutable"				{ return yy_add(MUTABLE); }
"namespace"				{ return yy_add(NAMESPACE); }
"new"					{ return yy_add(NEW); }
"operator"				{ return yy_add(OPERATOR); }
"private"				{ return yy_add(PRIVATE); }
"protected"				{ return yy_add(PROTECTED); }
"public"				{ return yy_add(PUBLIC); }
"register"				{ return yy_add(REGISTER); }
"reinterpret_cast"			{ return yy_add(REINTERPRET_CAST); }
"return"				{ return yy_add(RETURN); }
"short"					{ return yy_add(SHORT); }
"signed"				{ return yy_add(SIGNED); }
"sizeof"				{ return yy_add(SIZEOF); }
"static"				{ return yy_add(STATIC); }
"static_cast"				{ return yy_add(STATIC_CAST); }
"struct"				{ return yy_add(STRUCT); }
"switch"				{ return yy_add(SWITCH); }
"template"				{ return yy_add(TEMPLATE); }
"this"					{ return yy_add(THIS); }
"throw"					{ return yy_add(THROW); }
"true"					{ return yy_add(TRUE); }
"try"					{ return yy_add(TRY); }
"typedef"				{ return yy_add(TYPEDEF); }
"typeid"				{ return yy_add(TYPEID); }
"typename"				{ return yy_add(TYPENAME); }
"union"					{ return yy_add(UNION); }
"unsigned"				{ return yy_add(UNSIGNED); }
"using"					{ return yy_add(USING); }
"virtual"				{ return yy_add(VIRTUAL); }
"void"					{ return yy_add(VOID); }
"volatile"				{ return yy_add(VOLATILE); }
"wchar_t"				{ return yy_add(WCHAR_T); }
"while"					{ return yy_add(WHILE); }

[a-zA-Z_][a-zA-Z_0-9]*			{ return yy_add(IDENTIFIER); }

"0"[xX][0-9a-fA-F]+{intsuffix}?		{ return yy_add(INTEGER); }
"0"[0-7]+{intsuffix}?			{ return yy_add(INTEGER); }
[0-9]+{intsuffix}?			{ return yy_add(INTEGER); }

{fracconst}{exppart}?{floatsuffix}?	{ return yy_add(FLOATING); }
[0-9]+{exppart}{floatsuffix}?		{ return yy_add(FLOATING); }

"'"{chartext}*"'"			{ return yy_add(CHARACTER); }
"L'"{chartext}*"'"			{ return yy_add(CHARACTER); }

"\""{stringtext}*"\""			{ return yy_add(STRING); }
"L\""{stringtext}*"\""			{ return yy_add(STRING); }
"#include"" "*"<iostream>"		{ saw_iostream = 1; }
"#include"" "*"<cstdlib>"		{ saw_cstdlib = 1; }
"#include"" "*"<cmath>" 		{ saw_cmath = 1; }
"#include"" "*"<ctime>" 		{ saw_ctime = 1; }
"#include"" "*"<iomanip>"		{ saw_iomanip = 1; }
"#include"" "*"<string>"		{ saw_string = 1; }
"using namespace std;"			{ saw_std = 1; 
                            token *t;
                            //if(saw_string) tableInsert(globalTable, "string", NULL, CLASS_TYPE);
                            if(saw_iostream) {
                                //tableInsert(globalTable, "ifstream", NULL, CLASS_TYPE);
                                //tableInsert(globalTable, "ofstream", NULL, CLASS_TYPE);
                            }
                            if(saw_cstdlib) {}
                            if(saw_cmath) {}
                            if(saw_ctime) {}
                            if(saw_iomanip) {}
                        }


.					{ fprintf(stderr, "%d: unexpected character `%c'\n", lineno, yytext[0]); }

%%

static int
yywrap(void)
{
	return 1;
}

/*
 * We use this routine instead a lex pattern because we don't need
 * to save the matched comment in the `yytext' buffer.
 */
static void
skip_comment(void)
{
	int c1, c2;

	c1 = input();
	c2 = input();

	while (c2 != EOF && !(c1 == '*' && c2 == '/')) {
		if (c1 == '\n')
			++lineno;
		c1 = c2;
		c2 = input();
	}
}

/*
 * See the previous comment for an explanation.
 */
static void
skip_until_eol(void)
{
	int c;

	while ((c = input()) != EOF && c != '\n')
		;
	++lineno;
}

/*
 * Type name table.
 * Replace this with a hash table, when you get a chance.
 */
struct typenametable_entry {
   char *name;
   int category;
   struct typenametable_entry *next;
   } *head;

int typenametable_lookup(char *s)
{
   struct typenametable_entry *tmp = head;
   while (tmp) {
      if (!strcmp(s, tmp->name)) return tmp->category;
      tmp = tmp->next;
   }
   return IDENTIFIER;
}

int typenametable_insert(char *s, int cat)
{
   struct typenametable_entry *tmp = head;
   while (tmp) {
      if (!strcmp(s, tmp->name)) {
         fprintf(stderr,
	    "warning, %s is already in the typename table as a %d\n",
	    s, tmp->category );
         return tmp->category;
         }
      tmp = tmp->next;
   }
   tmp = calloc(1, sizeof (struct typenametable_entry));
   if(!tmp) { fprintf(stderr, "tnti out of memory\n"); return -1; }
   tmp->name = strdup(s);
   tmp->category = cat;
   tmp->next = head;
   head = tmp;
}

static int
check_identifier(char *s)
{
	return typenametable_lookup(s);
}

// Main token creation function for each
int yy_add( int i ) {

    token *t = calloc(1, sizeof(token));
    t->text = strdup(yytext);

    // Switch to look for svals and ivals
    switch(i) {

        case INTEGER:
            t->ival = atoi(yytext);
            break;
        case FLOATING:
            t->ival = atof(yytext);
            break;
        case CHARACTER:
            t->sval = strdup(yytext);
            break;
        case IDENTIFIER:
        case STRING:
            t->sval = strdup(yytext);
            //if(t->sval != NULL)fprintf(stderr,"In string or identifier, t->sval = %s\n", t->sval);
            break;
    }
    t->category = i;
    t->filename = fileName;
    t->lineno = lineno;
    // Malloc the tree node and set t as its leaf
    yylval = alctree(i, -1, t);
    return i;
}

char *yy_format( char *t ) {

    int size = strlen(t)-1;
    if(size>64) size = 64;
    char *temp = calloc(1, sizeof(char)*size);
    if( t == NULL && size < 1 ) return NULL;
    for( int i = 0; i < size-2; i++ ) {
        
        temp[i] = t[i+1];
    }
    temp[size-1] = '\n';
    return temp;
}