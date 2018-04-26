/*
 * Grammar for 120++, a subset of C++ used in CS 120 at University of Idaho
 *
 * Adaptation by Clinton Jeffery, with help from Matthew Brown, Ranger
 * Adams, and Shea Newton.
 *
 * Based on Sandro Sigala's transcription of the ISO C++ 1996 draft standard.
 * 
 */

/*	$Id: parser.y,v 1.3 1997/11/19 15:13:16 sandro Exp $	*/

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
 * ISO C++ parser.
 *
 * Based on the ISO C++ draft standard of December '96.
 */

%{
#ifndef TOKEN_H_
#define TOKEN_H_
#endif 

#define N(var) #var //Macro used to turn int codes into human readable var names
                    //Copy saved without N macro on alctrees element 1

#include <stdio.h>
#include <string.h>
#include "token.h"
#include "tree.h"
#include "treeFuncs.h"
#include "type.h"

extern int lineno;
extern char *yytext;
extern int yylex();
extern struct tree *globalTree;

int unsupported_error=0;   //global error flag for unsupported syntax, no errors if 0

void yyerror(char *s);

%}
%define api.value.type { struct tree* }

%token IDENTIFIER INTEGER FLOATING CHARACTER STRING
%token TYPEDEF_NAME NAMESPACE_NAME CLASS_NAME ENUM_NAME TEMPLATE_NAME

%token ELLIPSIS COLONCOLON DOTSTAR ADDEQ SUBEQ MULEQ DIVEQ MODEQ
%token XOREQ ANDEQ OREQ SL SR SREQ SLEQ EQ NOTEQ LTEQ GTEQ ANDAND OROR
%token PLUSPLUS MINUSMINUS ARROWSTAR ARROW

%token ASM AUTO BOOL BREAK CASE CATCH CHAR CLASS CONST CONST_CAST CONTINUE
%token DEFAULT DELETE DO DOUBLE DYNAMIC_CAST ELSE ENUM EXPLICIT EXPORT EXTERN
%token FALSE FLOAT FOR FRIEND GOTO IF INLINE INT LONG MUTABLE NAMESPACE NEW
%token OPERATOR PRIVATE PROTECTED PUBLIC REGISTER REINTERPRET_CAST RETURN
%token SHORT SIGNED SIZEOF STATIC STATIC_CAST STRUCT SWITCH TEMPLATE THIS
%token THROW TRUE TRY TYPEDEF TYPEID TYPENAME UNION UNSIGNED USING VIRTUAL
%token VOID VOLATILE WCHAR_T WHILE

%start translation_unit

%%

/*----------------------------------------------------------------------
 * Context-dependent identifiers.
 *----------------------------------------------------------------------*/

typedef_name:
	/* identifier */
	TYPEDEF_NAME            { $$ = alctree( TYPEDEF_NAME, -1, $$->leaf ); }
	;

namespace_name:
	original_namespace_name { $$ = $1; }
	;

original_namespace_name:
	/* identifier */
	NAMESPACE_NAME          { $$ = alctree( NAMESPACE_NAME, -1, $$->leaf ); }
	;

class_name:
	/* identifier */
	CLASS_NAME              { $$ = alctree( CLASS_NAME, -1, $$->leaf ); }
	| template_id           { $$ = NULL; yyerror("templates not supported by 120++. "); unsupported_error++; }
	;

enum_name:
	/* identifier */
	ENUM_NAME               { $$ = NULL; yyerror("Enum not supported by 120++. "); unsupported_error++; }
	;

template_name:
	/* identifier */
	TEMPLATE_NAME           { $$ = NULL; yyerror("Templates not supported by 120++. "); unsupported_error++; }
	;

/*----------------------------------------------------------------------
 * Lexical elements.
 *----------------------------------------------------------------------*/

identifier:
	IDENTIFIER  { $$ = alctree( IDENTIFIER, -1, $$->leaf ); }
	;

literal:
	integer_literal { $$ = $1; }
	| character_literal { $$ = $1; }
	| floating_literal { $$ = $1; }
	| string_literal { $$ = $1; }
	| boolean_literal { $$ = $1; }
	;

integer_literal:
	INTEGER     { $$ = alctree( INTEGER, -1, $$->leaf ); }
	;

character_literal:
	CHARACTER   { $$ = alctree( CHARACTER, -1, $$->leaf ); }
	;

floating_literal:
	FLOATING    { $$ = alctree( FLOATING, -1, $$->leaf ); }
	;

string_literal:
	STRING      { $$ = alctree( STRING, -1, $$->leaf ); }
	;

boolean_literal:
	TRUE        { $$ = alctree( TRUE, -1, $$->leaf ); }
	| FALSE     { $$ = alctree( FALSE, -1, $$->leaf ); }
	;

/*----------------------------------------------------------------------
 * Translation unit.
 *----------------------------------------------------------------------*/

translation_unit:
	declaration_seq_opt { $$ = alctree(root, 1, $1); globalTree = $$; }
	;

/*----------------------------------------------------------------------
 * Expressions.
 *----------------------------------------------------------------------*/

primary_expression:
	literal
	| THIS               { $$ = alctree( THIS, -1 ); }
	| '(' expression ')' { $$ = $2; }
	| id_expression      { $$ = $1; }
	;

id_expression:
	unqualified_id { $$ = $1; }
	| qualified_id { $$ = $1; }
	;

unqualified_id:
	identifier                  { $$ = $1; }
	| operator_function_id      { $$ = $1; }
	| conversion_function_id    { $$ = $1; }
	| '~' class_name            { $$ = alctree( DESTRUCTOR, 2, $1, $2 ); }
	;

qualified_id:
	nested_name_specifier unqualified_id                { $$ = alctree( NESTED_UNQUALIFIED, 2, $1, $2 ); }
	| nested_name_specifier TEMPLATE unqualified_id     { $$ = alctree( NESTED_TEMPLATE, 2, $1, $2 ); }
	;

nested_name_specifier:
	class_name COLONCOLON nested_name_specifier         { $$ = alctree( NESTED_CLASS_SPEC, 2, $1, $2 ); }
	| namespace_name COLONCOLON nested_name_specifier   { $$ = alctree( NESTED_NAMESPACE_SPEC, 2, $1, $2 ); }
	| class_name COLONCOLON                             { $$ = alctree( NESTED_CLASS, 2, $1, $2 ); }
	| namespace_name COLONCOLON                         { $$ = alctree( NESTED_NAMESPACE, 2, $1, $2 ); }
	;

postfix_expression:
	primary_expression                                              { $$ = $1; }
	| postfix_expression '[' expression ']'                         { $$ = alctree( POSTFIX_ARRAY, 2, $1, $3 ); }
	| postfix_expression '(' expression_list_opt ')'                { $$ = alctree( POSTFIX_CALL, 2, $1, $3 ); }
	| DOUBLE '(' expression_list_opt ')'                            { $$ = alctree( POSTFIX_CAST, 2, $1, $3 ); }
	| INT '(' expression_list_opt ')'                               { $$ = alctree( POSTFIX_CAST, 2, $1, $3 ); }
	| CHAR '(' expression_list_opt ')'                              { $$ = alctree( POSTFIX_CAST, 2, $1, $3 ); }
	| BOOL '(' expression_list_opt ')'                              { $$ = alctree( POSTFIX_CAST, 2, $1, $3 ); }
	| postfix_expression '.' TEMPLATE COLONCOLON id_expression      { $$ = alctree( POSTFIX_DOT, 5, $1, $2, $3, $4, $5); }
	| postfix_expression '.' TEMPLATE id_expression                 { $$ = alctree( POSTFIX_DOT, 4, $1, $2, $3, $4 ); }
	| postfix_expression '.' COLONCOLON id_expression               { $$ = alctree( POSTFIX_DOT, 4, $1, $2, $3, $4 ); }
	| postfix_expression '.' id_expression                          { $$ = alctree( POSTFIX_DOT, 3, $1, $2, $3 ); }
	| postfix_expression ARROW TEMPLATE COLONCOLON id_expression    { $$ = alctree( POSTFIX_ARROW, 5, $1, $2, $3, $4, $5 ); }
	| postfix_expression ARROW TEMPLATE id_expression               { $$ = alctree( POSTFIX_ARROW, 4, $1, $2, $3, $4 ); }
	| postfix_expression ARROW COLONCOLON id_expression             { $$ = alctree( POSTFIX_ARROW, 4, $1, $2, $3, $4 ); }
	| postfix_expression ARROW id_expression                        { $$ = alctree( POSTFIX_ARROW, 3, $1, $2, $3 ); }
	| postfix_expression PLUSPLUS                                   { $$ = alctree( POSTFIX_PLUSPLUS, 2, $1, $2 ); }
	| postfix_expression MINUSMINUS                                 { $$ = alctree( POSTFIX_MINUSMINUS, 2, $1, $2 ); }
	| DYNAMIC_CAST '<' type_id '>' '(' expression ')'           { $$ = alctree( DYNAMIC_CAST, 5, $1, $2, $3, $4, $6 ); }
	| STATIC_CAST '<' type_id '>' '(' expression ')'            { $$ = alctree( STATIC_CAST, 5, $1, $2, $3, $4, $6 ); }
	| REINTERPRET_CAST '<' type_id '>' '(' expression ')'       { $$ = alctree( REINTERPRET_CAST, 5, $1, $2, $3, $4, $6 ); }
	| CONST_CAST '<' type_id '>' '(' expression ')'             { $$ = alctree( CONST_CAST, 5, $1, $2, $3, $4, $6 ); }
	| TYPEID '(' expression ')'     { $$ = alctree( TYPEID, 2, $1, $3 ); }
	| TYPEID '(' type_id ')'        { $$ = alctree( TYPEID, 2, $1, $3 ); }
	;

expression_list:
	assignment_expression { $$ = $1; }
	| expression_list ',' assignment_expression { $$ = alctree( EXPRESSION_ASSIGN, 2, $1, $2, $3 ); }
	;

unary_expression:
	postfix_expression                  { $$ = $1; }
	| PLUSPLUS cast_expression          { $$ = alctree( UNARY_PLUSPLUS, 2, $1, $2 ); }
	| MINUSMINUS cast_expression        { $$ = alctree( UNARY_MINUSMINUS, 2, $1, $2 ); }
	| '*' cast_expression               { $$ = alctree( UNARY_STAR, 2, $1, $2 ); }
	| '&' cast_expression               { $$ = alctree( UNARY_AND, 2, $1, $2 ); }
	| unary_operator cast_expression    { $$ = alctree( UNARY_CAST, 2, $1, $2 ); }
	| SIZEOF unary_expression           { $$ = alctree( UNARY_SIZEOF_EXPR, 2, $1, $2 ); }
	| SIZEOF '(' type_id ')'            { $$ = alctree( UNARY_SIZEOF_TYPE, 4, $1, $2, $3, $4 ); }
	| new_expression                    { $$ = $1; }
	| delete_expression                 { $$ = $1; }
	;

unary_operator:
	  '+' { $$ = alctree( '+', -1, $$->leaf ); }
	| '-' { $$ = alctree( '-', -1, $$->leaf ); }
	| '!' { $$ = alctree( '!', -1, $$->leaf ); }
	| '~' { $$ = alctree( '~', -1, $$->leaf ); }
	;

new_expression:
	  NEW new_placement_opt new_type_id new_initializer_opt                 { $$ = alctree( NEW_TYPE, 4, $1, $2, $3, $4 ); }
	| COLONCOLON NEW new_placement_opt new_type_id new_initializer_opt      { $$ = alctree( NEW_TYPE_CC, 5, $1, $2, $3, $4, $5 ); }
	| NEW new_placement_opt '(' type_id ')' new_initializer_opt             { $$ = alctree( NEW_PARAM, 4, $1, $2, $3, $4, $5, $6 ); }
	| COLONCOLON NEW new_placement_opt '(' type_id ')' new_initializer_opt  { $$ = alctree( NEW_PARAM_CC, 5, $1, $2, $3, $4, $5, $6, $7 ); }
	;

new_placement:
	'(' expression_list ')' { $$ = $1; }
	;

new_type_id:
	type_specifier_seq new_declarator_opt { $$ = alctree( NEW_TYPE_ID, 2, $1, $2 ); }
	;

new_declarator:
	ptr_operator new_declarator_opt { $$ = NULL; yyerror("Pointers not supported in 120++\n"); unsupported_error++; }
	| direct_new_declarator { $$ = $1; }
	;

direct_new_declarator:
	'[' expression ']' { $$ = $1; }
	| direct_new_declarator '[' constant_expression ']' { $$ = alctree( DIRECT_NEW, 2, $1, $3 ); }
	;

new_initializer:
	'(' expression_list_opt ')' { $$ = $1; }
	;

delete_expression:
	  DELETE cast_expression                    { $$ = alctree( DELETE_EXPR, 2, $1, $2 ); }
	| COLONCOLON DELETE cast_expression         { $$ = alctree( DELETE_CC_EXPR, 2, $2, $3 ); }
	| DELETE '[' ']' cast_expression            { $$ = alctree( DELETE_BRACKET_EXPR, 2, $1, $4 ); }
	| COLONCOLON DELETE '[' ']' cast_expression { $$ = alctree( DELETE_CC_BRACKET_EXPR, 3, $1, $2, $5 ); }
	;

cast_expression:
	unary_expression { $$ = $1; };
	| '(' type_id ')' cast_expression           { $$ = alctree( CAST_EXPR, 2, $2, $4 ); }
	;

pm_expression:
	cast_expression { $$ = $1; }
	| pm_expression DOTSTAR cast_expression         { $$ = alctree( PM_DOTSTAR, 3, $1, $2, $3 ); }
	| pm_expression ARROWSTAR cast_expression       { $$ = alctree( PM_ARROWSTAR, 3, $1, $2, $3 ); }
	;

multiplicative_expression:
	pm_expression { $$ = $1; }
	| multiplicative_expression '*' pm_expression   { $$ = alctree( MULT_STAR, 3, $1, $2, $3 ); }
	| multiplicative_expression '/' pm_expression   { $$ = alctree( MULT_DIV, 3, $1, $2, $3 ); }
	| multiplicative_expression '%' pm_expression   { $$ = alctree( MULT_PERC, 3, $1, $2, $3 ); }
	;

additive_expression:
	multiplicative_expression { $$ = $1; }
	| additive_expression '+' multiplicative_expression { $$ = alctree( ADD_PLUS, 3, $1, $2, $3 ); }
	| additive_expression '-' multiplicative_expression { $$ = alctree( ADD_MINUS, 3, $1, $2, $3 ); }
	;

shift_expression:
	additive_expression { $$ = $1; }
	| shift_expression SL additive_expression           { $$ = alctree( SHIFT_EXPR_SL, 3, $1, $2, $3 ); }
	| shift_expression SR additive_expression           { $$ = alctree( SHIFT_EXPR_SR, 3, $1, $2, $3 ); }
	;

relational_expression:
	shift_expression { $$ = $1; }
	| relational_expression '<' shift_expression        { $$ = alctree( RELATION_LT, 3, $1, $2, $3 ); }
	| relational_expression '>' shift_expression        { $$ = alctree( RELATION_GT, 3, $1, $2, $3 ); }
	| relational_expression LTEQ shift_expression       { $$ = alctree( RELATION_LTEQ, 3, $1, $2, $3 ); }
	| relational_expression GTEQ shift_expression       { $$ = alctree( RELATION_GTEQ, 3, $1, $2, $3 ); }
	;

equality_expression:
	relational_expression { $$ = $1; }
	| equality_expression EQ relational_expression      { $$ = alctree( EQUAL, 3, $1, $2, $3 ); }
	| equality_expression NOTEQ relational_expression   { $$ = alctree( NEQUAL, 3, $1, $2, $3 ); }
	;

and_expression:
	equality_expression { $$ = $1; }
	| and_expression '&' equality_expression                   { $$ = alctree( AND_EQUAL, 3, $1, $2, $3 ); }
	;

exclusive_or_expression:
	and_expression { $$ = $1; }
	| exclusive_or_expression '^' and_expression               { $$ = alctree( EXLUSIVE_OR, 3, $1, $2, $3 ); }
	;

inclusive_or_expression:
	exclusive_or_expression { $$ = $1; }
	| inclusive_or_expression '|' exclusive_or_expression      { $$ = alctree( INCLUSIVE_OR, 3, $1, $2, $3 ); }
	;

logical_and_expression:
	inclusive_or_expression { $$ = $1; }
	| logical_and_expression ANDAND inclusive_or_expression    { $$ = alctree( LOGICAL_AND, 3, $1, $2, $3 ); }
	;

logical_or_expression:
	logical_and_expression { $$ = $1; }
	| logical_or_expression OROR logical_and_expression        { $$ = alctree( LOGICAL_OR, 3, $1, $2, $3 ); }
	;

conditional_expression:
	logical_or_expression { $$ = $1; }
	| logical_or_expression  '?' expression ':' assignment_expression { $$ = alctree( CONDITIONAL_OR, 5, $1, $2, $3, $4, $5 ); }
	;

assignment_expression:
	conditional_expression { $$ = $1; }
	| logical_or_expression assignment_operator assignment_expression { $$ = alctree( ASSIGNMENT_EXPR, 3, $1, $2, $3 ); }
	| throw_expression { $$ = $1; }
	;

assignment_operator:
	'='
	| MULEQ { $$ = alctree( MULEQ, -1, $$->leaf ); }
	| DIVEQ { $$ = alctree( DIVEQ, -1, $$->leaf ); }
	| MODEQ { $$ = alctree( MODEQ, -1, $$->leaf ); }
	| ADDEQ { $$ = alctree( ADDEQ, -1, $$->leaf ); }
	| SUBEQ { $$ = alctree( SUBEQ, -1, $$->leaf ); }
	| SREQ  { $$ = alctree( SREQ, -1, $$->leaf ); }
	| SLEQ  { $$ = alctree( SLEQ, -1, $$->leaf ); }
	| ANDEQ { $$ = alctree( ANDEQ, -1, $$->leaf ); }
	| XOREQ { $$ = alctree( XOREQ, -1, $$->leaf ); }
	| OREQ  { $$ = alctree( OREQ, -1, $$->leaf ); }
	;

expression:
	assignment_expression { $$ = $1; }
	| expression ',' assignment_expression { $$ = alctree( EXPRESSION, 3, $1, $2, $3 ); }
	;

constant_expression:
	conditional_expression { $$ = $1; }
	;

/*----------------------------------------------------------------------
 * Statements.
 *----------------------------------------------------------------------*/

statement:
	labeled_statement       { $$ = $1; }
	| expression_statement  { $$ = $1; }
	| compound_statement    { $$ = $1; }
	| selection_statement   { $$ = $1; }
	| iteration_statement   { $$ = $1; }
	| jump_statement        { $$ = $1; }
	| declaration_statement { $$ = $1; }
	| try_block             { $$ = $1; }
	;

labeled_statement:
	identifier ':' statement                    { $$ = alctree( STATEMENT_LABELED, 3, $1, $2, $3 ); }
	| CASE constant_expression ':' statement    { $$ = alctree( STATEMENT_CASE, 4, $1, $2, $3, $4 ); }
	| DEFAULT ':' statement                     { $$ = alctree( STATEMENT_DEFAULT, 3, $1, $2, $3 ); }
	;

expression_statement:
	expression_opt ';'  { $$ = $1; }
	;

compound_statement:
	'{' statement_seq_opt '}' { $$ = alctree( COMPOUND, 1, $1); }
	;

statement_seq:
	statement { $$ = $1; }
	| statement_seq statement { $$ = alctree( STATEMENT_SEQ, 2, $1, $2 ); }
	;

selection_statement:
	IF '(' condition ')' statement                  { $$ = alctree( STATEMENT_IF, 3, $1, $3, $5 ); }
	| IF '(' condition ')' statement ELSE statement { $$ = alctree( STATEMENT_IF_ELSE, 5, $1, $3, $5, $6, $7 ); }
	| SWITCH '(' condition ')' statement            { $$ = alctree( STATEMENT_SWITCH, 3, $1, $3, $5 ); }
	;

condition:
	expression { $$ = $1; }
	| type_specifier_seq declarator '=' assignment_expression { $$ = alctree( CONDITION, 4, $1, $2, $3, $4 ); }
	;

iteration_statement:
	WHILE '(' condition ')' statement           { $$ = alctree( WHILE_STATEMENT, 3, $1, $3, $5 ); }
	| DO statement WHILE '(' expression ')' ';' { $$ = alctree( DOWHILE_STATEMENT, 5, $1, $2, $3, $5, $7 ); }
	| FOR '(' for_init_statement condition_opt ';' expression_opt ')' statement  { $$ = alctree( FOR_STATEMENT, 6, $1, $3, $4, $5, $6, $8 ); }
	;

for_init_statement:
	expression_statement { $$ = $1; }
	| simple_declaration { $$ = $1; }
	;

jump_statement:
	BREAK ';'                   { $$ = alctree( BREAK, 2, $1, $2 ); }
	| CONTINUE ';'              { $$ = alctree( CONTINUE, 2, $1, $2 ); }
	| RETURN expression_opt ';' { $$ = alctree( RETURN_STATEMENT, 3, $1, $2, $3 ); }
	| GOTO identifier ';'       { $$ = alctree( GOTO_STATEMENT, 3, $1, $2, $3 ); }
	;

declaration_statement:
	block_declaration { $$ = $1; }
	;

/*----------------------------------------------------------------------
 * Declarations.
 *----------------------------------------------------------------------*/

declaration_seq:
	declaration                     { $$ = $1; }
	| declaration_seq declaration   { $$ = alctree( DECL_SEQ, 2, $1, $2 ); }
	;

declaration:
	block_declaration           { $$ = $1; }
	| function_definition       { $$ = $1; }
	| template_declaration      { $$ = $1; }
	| explicit_instantiation    { $$ = $1; }
	| explicit_specialization   { $$ = $1; }
	| linkage_specification     { $$ = $1; }
	| namespace_definition      { $$ = $1; }
	;

block_declaration:
	simple_declaration          { $$ = $1; }
	| asm_definition            { $$ = $1; }
	| namespace_alias_definition { $$ = $1; }
	| using_declaration         { $$ = $1; }
	| using_directive           { $$ = $1; }
	;

simple_declaration:
	  decl_specifier_seq init_declarator_list ';'   { $$ = alctree( DECL_SPEC_INIT, 2, $1, $2 ); }
	|  decl_specifier_seq ';'                       { $$ = $1; }
	;

decl_specifier:
	storage_class_specifier { $$ = $1; }
	| type_specifier        { $$ = $1; }
	| function_specifier    { $$ = $1; }
	| FRIEND                { $$ = alctree( FRIEND, -1, $$->leaf ); }
	| TYPEDEF               { $$ = alctree( TYPEDEF, -1, $$->leaf ); }
	;

decl_specifier_seq:
	  decl_specifier                    { $$ = $1; }
	| decl_specifier_seq decl_specifier { $$ = alctree( DECL_SPEC_SEQ, 2, $1, $2 ); }
	;

storage_class_specifier:
	AUTO        { $$ = alctree( AUTO, -1, $$->leaf ); }
	| REGISTER  { $$ = alctree( REGISTER, -1, $$->leaf ); }
	| STATIC    { $$ = alctree( STATIC, -1, $$->leaf ); }
	| EXTERN    { $$ = alctree( EXTERN, -1, $$->leaf ); }
	| MUTABLE   { $$ = alctree( MUTABLE, -1, $$->leaf ); }
	;

function_specifier:
	INLINE      { $$ = alctree( INLINE, -1, $$->leaf ); }
	| VIRTUAL   { $$ = NULL; yyerror("Virtual not supported by 120++. "); unsupported_error++; }
	| EXPLICIT  { $$ = alctree( EXPLICIT, -1, $$->leaf ); }
	;

type_specifier:
	simple_type_specifier       { $$ = $1; }
	| class_specifier           { $$ = $1; }
	| enum_specifier            { $$ = $1; }
	| elaborated_type_specifier { $$ = $1; }
	| cv_qualifier              { $$ = $1; }
	;

simple_type_specifier:
	  type_name { $$ = $1; }
	| nested_name_specifier type_name                { $$ = alctree( SIMPLE_TYPE_NESTED, 2, $1, $2 ); }
	| COLONCOLON nested_name_specifier_opt type_name { $$ = alctree( SIMPLE_TYPE_CC, 3, $1, $2, $3 ); }
	| CHAR      { $$ = alctree( CHAR, -1, $$->leaf ); }
	| WCHAR_T   { $$ = alctree( WCHAR_T, -1, $$->leaf ); }
	| BOOL      { $$ = alctree( BOOL, -1, $$->leaf ); }
	| SHORT     { $$ = alctree( SHORT, -1, $$->leaf ); }
	| INT       { $$ = alctree( INT, -1, $$->leaf ); }
	| LONG      { $$ = alctree( LONG, -1, $$->leaf ); }
	| SIGNED    { $$ = alctree( SIGNED, -1, $$->leaf ); }
	| UNSIGNED  { $$ = alctree( UNSIGNED, -1, $$->leaf ); }
	| FLOAT     { $$ = alctree( FLOAT, -1, $$->leaf ); }
	| DOUBLE    { $$ = alctree( DOUBLE, -1, $$->leaf ); }
	| VOID      { $$ = alctree( VOID, -1, $$->leaf ); }
	;

type_name:
	class_name { $$ = $1; }
	| enum_name { $$ = $1; }
	| typedef_name { $$ = $1; }
	;

elaborated_type_specifier:
	  class_key COLONCOLON nested_name_specifier identifier     { $$ = alctree( ELAB_TYPE_CC_NESTED, 4, $1, $2, $3, $4 ); }
	| class_key COLONCOLON identifier                           { $$ = alctree( ELAB_TYPE_CC, 3, $1, $2, $3 ); }
	| ENUM COLONCOLON nested_name_specifier identifier          { $$ = alctree( ELAB_TYPE_CC_ENUM_NESTED, 4, $1, $2, $3, $4 ); }
	| ENUM COLONCOLON identifier                                { $$ = alctree( ELAB_TYPE_CC_ENUM, 3, $1, $2, $3); }
	| ENUM nested_name_specifier identifier                     { $$ = alctree( ELAB_TYPE_ENUM, 3, $1, $2, $3 ); }
	| TYPENAME COLONCOLON_opt nested_name_specifier identifier  { $$ = alctree( ELAB_TYPENAME, 4, $1, $2, $3, $4 ); }
	| TYPENAME COLONCOLON_opt nested_name_specifier identifier '<' template_argument_list '>' { $$ = alctree( ELAB_TYPENAME_ARGS, 7, $1, $2, $3, $4, $5, $6, $7 ); }
	;

/*
enum_name:
	identifier
	;
*/

enum_specifier:
	ENUM identifier '{' enumerator_list_opt '}' { $$ = alctree( ENUM_SPEC, 3, $1, $2, $4 ); }
	;

enumerator_list:
	enumerator_definition
	| enumerator_list ',' enumerator_definition { $$ = alctree( ENUM_LIST, 2, $1, $3 ); }
	;

enumerator_definition:
	enumerator                                  { $$ = $1; }
	| enumerator '=' constant_expression        { $$ = alctree( ENUM_DEF, 2, $1, $3 ); }
	;

enumerator:
	identifier { $$ = $1; }
	;

/*
namespace_name:
	original_namespace_name
	| namespace_alias
	;

original_namespace_name:
	identifier
	;
*/

namespace_definition:
	named_namespace_definition      { $$ = $1; }
	| unnamed_namespace_definition  { $$ = $1; }
	;

named_namespace_definition:
	original_namespace_definition    { $$ = $1; }
	| extension_namespace_definition { $$ = $1; }
	;

original_namespace_definition:
	NAMESPACE identifier '{' namespace_body '}'             { $$ = alctree( ORIG_NS_DEF, 5, $1, $2, $3, $4, $5 ); }
	;

extension_namespace_definition:
	NAMESPACE original_namespace_name '{' namespace_body '}' { $$ = alctree( EXTEN_NS_DEF, 5, $1, $2, $3, $4, $5 ); }
	;

unnamed_namespace_definition:
	NAMESPACE '{' namespace_body '}'                        { $$ = alctree( UNNAMED_NS_DEF, 4, $1, $2, $3, $4 ); }
	;

namespace_body:
	declaration_seq_opt { $$ = $1; }
	;

/*
namespace_alias:
	identifier
	;
*/

namespace_alias_definition:
	NAMESPACE identifier '=' qualified_namespace_specifier ';' { $$ = alctree( UNNAMED_NS_DEF, 4, $1, $2, $3, $4 ); }
	;

qualified_namespace_specifier:
	  COLONCOLON nested_name_specifier namespace_name   { $$ = alctree( QUAL_CC_NS_NESTED, 3, $1, $2, $3 ); }
	| COLONCOLON namespace_name                         { $$ = alctree( QUAL_CC_NS, 2, $1, $2 ); }
	| nested_name_specifier namespace_name              { $$ = alctree( QUAL_NS, 2, $1, $2 ); }
	| namespace_name                                    { $$ = $1; }
	;

using_declaration:
	  USING TYPENAME COLONCOLON nested_name_specifier unqualified_id ';' { $$ = alctree( USING_DECL_1, 5, $1, $2, $3, $4, $5 ); }
	| USING TYPENAME nested_name_specifier unqualified_id ';'   { $$ = alctree( USING_DECL_2, 4, $1, $2, $3, $4 ); }
	| USING COLONCOLON nested_name_specifier unqualified_id ';' { $$ = alctree( USING_DECL_3, 4, $1, $2, $3, $4 ); }
	| USING nested_name_specifier unqualified_id ';'            { $$ = alctree( USING_DECL_4, 3, $1, $2, $3 ); }
	| USING COLONCOLON unqualified_id ';'                       { $$ = alctree( USING_DECL_5, 3, $1, $2, $3 ); }
	;

using_directive:
	USING NAMESPACE COLONCOLON nested_name_specifier namespace_name ';' { $$ = alctree( USING_DIREC_1, 5, $1, $2, $3, $4, $5 ); }
	| USING NAMESPACE COLONCOLON namespace_name ';'                     { $$ = alctree( USING_DIREC_2, 4, $1, $2, $3, $4 ); }
	| USING NAMESPACE nested_name_specifier namespace_name ';'          { $$ = alctree( USING_DIREC_3, 4, $1, $2, $3, $4 ); }
	| USING NAMESPACE namespace_name ';'                                { $$ = alctree( USING_DIREC_4, 3, $1, $2, $3 ); }
	;

asm_definition:
	ASM '(' string_literal ')' ';' { $$ = NULL; }
	;

linkage_specification:
	EXTERN string_literal '{' declaration_seq_opt '}' { $$ = NULL; }
	| EXTERN string_literal declaration               { $$ = NULL; }
	;

/*----------------------------------------------------------------------
 * Declarators.
 *----------------------------------------------------------------------*/

init_declarator_list:
	init_declarator { $$ = $1; }
	| init_declarator_list ',' init_declarator { $$ = alctree( INIT_LIST, 2, $1, $3 ); }
	;

init_declarator:
	declarator initializer_opt { $$ = alctree( INIT_DECL, 2, $1, $2 ); }
	;

declarator:
	direct_declarator { $$ = $1; }
	| ptr_operator declarator { $$ = alctree( INIT_PTR, 2, $1, $2 ); }
	;

direct_declarator:
	  declarator_id { $$ = $1; }
	| direct_declarator '(' parameter_declaration_clause ')' cv_qualifier_seq exception_specification { $$ = alctree( DIRECT_DECL1, 4, $1, $3, $5, $6 ); }
	| direct_declarator '(' parameter_declaration_clause ')' cv_qualifier_seq   { $$ = alctree( DIRECT_DECL2, 3, $1, $3, $5 ); }
	| direct_declarator '(' parameter_declaration_clause ')' exception_specification { $$ = alctree(DIRECT_DECL3, 3, $1, $3, $5); }
        | direct_declarator '(' parameter_declaration_clause ')'                    { $$ = alctree(DIRECT_DECL4, 2, $1, $3); }
	| CLASS_NAME '(' parameter_declaration_clause ')'                           { $$ = alctree(DIR_CLASS_DECL1, 2, $1, $3); }
	| CLASS_NAME COLONCOLON declarator_id '(' parameter_declaration_clause ')'  { $$ = alctree(DIR_CLASS_DECL2, 4, $1, $2, $3, $5 ); }
	| CLASS_NAME COLONCOLON CLASS_NAME '(' parameter_declaration_clause ')'     { $$ = alctree(DIR_CLASS_DECL3, 4, $1, $2, $3, $5 ); }
	| direct_declarator '[' constant_expression_opt ']'                         { $$ = alctree(DIRECT_DECL5, 2, $1, $3 ); }
	| '(' declarator ')' { $$ = $2; }
	;

ptr_operator:
	'*' { $$ = $1; }
	| '*' cv_qualifier_seq { $$ = alctree( PTR_OP1, 2, $1, $2 ); }
	| '&' { $$ = $1; }
	| nested_name_specifier '*'                  { $$ = alctree( PTR_OP2, 2, $1, $2 ); }
	| nested_name_specifier '*' cv_qualifier_seq { $$ = alctree( PTR_OP3, 2, $1, $2 ); }
	| COLONCOLON nested_name_specifier '*'       { $$ = alctree( PTR_OP4, 3, $1, $2, $3 ); }
	;

cv_qualifier_seq:
	cv_qualifier { $$ = $1; }
	| cv_qualifier cv_qualifier_seq { $$ = alctree( CV_SEQ, 2, $1, $2 ); }
	;

cv_qualifier:
	CONST       { $$ = $1; }
	| VOLATILE  { $$ = $1; }
	;

declarator_id:
	  id_expression { $$ = $1; }
	| COLONCOLON id_expression                   { $$ = alctree( CV_SEQ, 2, $1, $2 ); }
	| COLONCOLON nested_name_specifier type_name { $$ = alctree( DECL_IDN, 2, $1, $2 ); }
	| COLONCOLON type_name                       { $$ = alctree( DECL_TN, 2, $1, $2 ); }
	;

type_id:
	type_specifier_seq abstract_declarator_opt { $$ = alctree( TYPE_ID, 2, $1, $2 ); }
	;

type_specifier_seq:
	type_specifier type_specifier_seq_opt { $$ = alctree( TYPE_SPEC, 2, $1, $2 ); }
	;

abstract_declarator:
	ptr_operator abstract_declarator_opt { $$ = alctree( ABS_DECL, 2, $1, $2 ); }
	| direct_abstract_declarator         { $$ = $1; }
	;

direct_abstract_declarator:
	  direct_abstract_declarator_opt '(' parameter_declaration_clause ')' cv_qualifier_seq exception_specification { $$ = alctree( DIR_ABS1, 4, $1, $3, $5, $6 ); }
	| direct_abstract_declarator_opt '(' parameter_declaration_clause ')' cv_qualifier_seq                         { $$ = alctree( DIR_ABS2, 3, $1, $3, $5 ); }
	| direct_abstract_declarator_opt '(' parameter_declaration_clause ')' exception_specification                  { $$ = alctree( DIR_ABS3, 3, $1, $3, $5 ); }
	| direct_abstract_declarator_opt '(' parameter_declaration_clause ')'   { $$ = alctree( DIR_ABS4, 2, $1, $3 ); }
	| direct_abstract_declarator_opt '[' constant_expression_opt ']'        { $$ = alctree( DIR_ABS5, 2, $1, $3 ); }
	| '(' abstract_declarator ')' { $$ = $1; }
	;

parameter_declaration_clause:
	  parameter_declaration_list ELLIPSIS       { yyerror("Ellipses not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	| parameter_declaration_list                { $$ = $1; }
	| ELLIPSIS                                  { yyerror("Ellipses not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	|                                           { $$ = NULL; }
	| parameter_declaration_list ',' ELLIPSIS   { yyerror("Ellipses not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	;

parameter_declaration_list:
	parameter_declaration { $$ = $1; }
	| parameter_declaration_list ',' parameter_declaration { $$ = alctree( PARAM_DECL_LIST, 2, $1, $3 ); }
	;

parameter_declaration:
	decl_specifier_seq declarator                                           { $$ = alctree( PARAM_DECL1, 2, $1, $2 ); }
	| decl_specifier_seq declarator '=' assignment_expression               { $$ = alctree( PARAM_DECL2, 4, $1, $2, $3, $4 ); }
	| decl_specifier_seq abstract_declarator_opt                            { $$ = alctree( PARAM_DECL3, 2, $1, $2 ); }
	| decl_specifier_seq abstract_declarator_opt '=' assignment_expression  { $$ = alctree( PARAM_DECL4, 4, $1, $2, $3, $4 ); }
	;

function_definition:
          declarator ctor_initializer_opt function_body                     { $$ = alctree( FUNC_DEF1, 3, $1, $2, $3 ); }
	| decl_specifier_seq declarator ctor_initializer_opt function_body  { $$ = alctree( FUNC_DEF2, 4, $1, $2, $3, $4 ); }
	| declarator function_try_block                                     { $$ = NULL; unsupported_error++; fprintf(stderr, "Try not implemented in 120++.\n"); }
	| decl_specifier_seq declarator function_try_block                  { $$ = NULL; unsupported_error++; fprintf(stderr, "Try not implemented in 120++.\n"); }
	;

function_body:
	compound_statement { $$ = $1; }
	;

initializer:
	'=' initializer_clause    { $$ = alctree( INIT, 2, $1, $2 ); }
	| '(' expression_list ')' { $$ = $2; }
	;

initializer_clause:
	assignment_expression { $$ = $1; }
	| '{' initializer_list COMMA_opt '}' { $$ = alctree( INIT_CLAUSE, 4, $1, $2, $3, $4 ); }
	| '{' '}'                            { $$ = alctree( INIT_CLAUSE, 2, $1, $2 ); }
	;

initializer_list:
	initializer_clause { $$ = $1; }
	| initializer_list ',' initializer_clause { $$ = alctree( INITR_LIST, 3, $1, $2, $3 ); }
	;

/*----------------------------------------------------------------------
 * Classes.
 *----------------------------------------------------------------------*/

class_specifier:
	class_head '{' member_specification_opt '}' ';'          { $$ = alctree( CLASS_SPEC, 2, $1, $3 ); }
	;

class_head:
	| class_key identifier base_clause                       { $$ = alctree( CLASS_HEAD1, 3, $1, $2, $3 ); }
	| class_key nested_name_specifier identifier             { $$ = alctree( CLASS_HEAD2, 3, $1, $2, $3 ); }
	| class_key nested_name_specifier identifier base_clause { $$ = alctree( CLASS_HEAD3, 4, $1, $2, $3, $4 ); }
	;

class_key:
	CLASS    { $$ = alctree( CLASS, -1, $$->leaf ); }
	| STRUCT { $$ = NULL; }
	| UNION  { $$ = NULL; }
	;

member_specification:
	member_declaration member_specification_opt     { $$ = alctree( MEMBER_SPEC, 2, $1, $2 ); }
	| access_specifier ':' member_specification_opt { $$ = alctree( ACCESS_SPEC, 2, $1, $2 ); }
	;

member_declaration:
	  decl_specifier_seq member_declarator_list ';' { $$ = alctree( MEMBER_DECL2, 2, $1, $2 ); }
	| decl_specifier_seq ';'                        { $$ = $1; }
	| member_declarator_list ';'                    { $$ = $1; }
	| ';'                                           { $$ = NULL; }
	| function_definition SEMICOLON_opt             { $$ = alctree( MEMBER_DECL2, 2, $1, $2 ); }
	| qualified_id ';'                              { $$ = $1; }
	| using_declaration                             { $$ = $1; }
	| template_declaration                          { $$ = $1; }
	;

member_declarator_list:
	member_declarator                               { $$ = $1; }
	| member_declarator_list ',' member_declarator  { $$ = alctree( MEMBER_DECL_LIST, 3, $1, $2, $3 ); }
	;

member_declarator:
	  declarator                            { $$ = $1; }
	| declarator pure_specifier             { $$ = alctree( DECLARATOR, 2, $1, $2 ); }
	| declarator constant_initializer       { $$ = alctree( DECLARATOR, 2, $1, $2 ); }
	| identifier ':' constant_expression    { $$ = alctree( DECLARATOR, 3, $1, $2, $3 ); }
	;

/*
 * This rule need a hack for working around the ``= 0'' pure specifier.
 * 0 is returned as an ``INTEGER'' by the lexical analyzer but in this
 * context is different.
 */
pure_specifier:
	'=' '0'
	;

constant_initializer:
	'=' constant_expression { $$ = alctree( CONST_INIT, 2, $1, $2 ); }
	;

/*----------------------------------------------------------------------
 * Derived classes.
 *----------------------------------------------------------------------*/

base_clause:
	':' base_specifier_list { $$ = alctree( BASE_CLAUSE, 2, $1, $2 ); }
	;

base_specifier_list:
	base_specifier  { $$ = $1; }
	| base_specifier_list ',' base_specifier { $$ = alctree( BASE_SPEC_LIST, 3, $1, $2, $3 ); }
	;

base_specifier:
	  COLONCOLON nested_name_specifier class_name   { $$ = alctree( BASE_SPEC1, 3, $1, $2, $3 ); }
	| COLONCOLON class_name                         { $$ = alctree( BASE_SPEC2, 2, $1, $2 ); }
	| nested_name_specifier class_name              { $$ = alctree( BASE_SPEC3, 2, $1, $2 ); }
	| class_name                                    { $$ = $1; }
	| VIRTUAL access_specifier COLONCOLON nested_name_specifier_opt class_name  { $$ = $1; }
	| VIRTUAL access_specifier nested_name_specifier_opt class_name             { $$ = $1; }
	| VIRTUAL COLONCOLON nested_name_specifier_opt class_name                   { $$ = $1; }
	| VIRTUAL nested_name_specifier_opt class_name                              { $$ = $1; }
	| access_specifier VIRTUAL COLONCOLON nested_name_specifier_opt class_name  { $$ = $2; }
	| access_specifier VIRTUAL nested_name_specifier_opt class_name             { $$ = $2; }
	| access_specifier COLONCOLON nested_name_specifier_opt class_name          { $$ = alctree( BASE_SPEC4, 4, $1, $2, $3, $4 ); }
	| access_specifier nested_name_specifier_opt class_name                     { $$ = alctree( BASE_SPEC5, 3, $1, $2, $3 ); }
	;

access_specifier:
	PRIVATE     { $$ = $1; }
	| PROTECTED { yyerror("Protected type not supported in 120++.\n"); $$ = NULL; unsupported_error++; }
	| PUBLIC    { $$ = $1; }
	;

/*----------------------------------------------------------------------
 * Special member functions.
 *----------------------------------------------------------------------*/

conversion_function_id:
	OPERATOR conversion_type_id                     { $$ = alctree( CONV_FUNC, 2, $1, $2 ); }
	;

conversion_type_id:
	type_specifier_seq conversion_declarator_opt    { $$ = alctree( CONV_TYPE, 2, $1, $2 ); }
	;

conversion_declarator:
	ptr_operator conversion_declarator_opt          { $$ = alctree( CONV_DECL, 2, $1, $2 ); }
	;

ctor_initializer:
	':' mem_initializer_list                        { $$ = alctree( CTOR_INIT, 2, $1, $2 ); }
	;

mem_initializer_list:
	mem_initializer                                 { $$ = $1; }
	| mem_initializer ',' mem_initializer_list      { $$ = alctree( MEM_INIT_LIST, 3, $1, $3 ); }
	;

mem_initializer:
	mem_initializer_id '(' expression_list_opt ')'  { $$ = alctree( MEM_INIT, 2, $1, $3 ); }
	;

mem_initializer_id:
	  COLONCOLON nested_name_specifier class_name   { $$ = alctree( MEM_INIT_ID1, 3, $1, $2, $3 ); }
	| COLONCOLON class_name                         { $$ = alctree( MEM_INIT_ID2, 2, $1, $2 ); }
	| nested_name_specifier class_name              { $$ = alctree( MEM_INIT_ID3, 2, $1, $2 ); }
	| class_name                                    { $$ = $1; }
	| identifier                                    { $$ = $1; }
	;

/*----------------------------------------------------------------------
 * Overloading.
 *----------------------------------------------------------------------*/

operator_function_id:
	OPERATOR operator { $$ = alctree( OP_FUNC, 2, $1, $2 ); }
	;

operator:
	NEW      { $$ = $1; }
	| DELETE { $$ = $1; }
	| NEW '[' ']'   { $$ = alctree( NEW_ARRAY, 3, $1, $2, $3 ); }
	| DELETE '[' ']'{ $$ = alctree( DELETE_ARRAY, 3, $1, $2, $3 ); }
	| '+'   { $$ = $1; }
	| '_'   { $$ = $1; }
	| '*'   { $$ = $1; }
	| '/'   { $$ = $1; }
	| '%'   { $$ = $1; }
	| '^'   { $$ = $1; }
	| '&'   { $$ = $1; }
	| '|'   { $$ = $1; }
	| '~'   { $$ = $1; }
	| '!'   { $$ = $1; }
	| '='   { $$ = $1; }
	| '<'   { $$ = $1; }
	| '>'   { $$ = $1; }
	| ADDEQ         { $$ = $1; }
	| SUBEQ         { $$ = $1; }
	| MULEQ         { $$ = $1; }
	| DIVEQ         { $$ = $1; }
	| MODEQ         { $$ = $1; }
	| XOREQ         { $$ = $1; }
	| ANDEQ         { $$ = $1; }
	| OREQ          { $$ = $1; }
	| SL            { $$ = $1; }
	| SR            { $$ = $1; }
	| SREQ          { $$ = $1; }
	| SLEQ          { $$ = $1; }
	| EQ            { $$ = $1; }
	| NOTEQ         { $$ = $1; }
	| LTEQ          { $$ = $1; }
	| GTEQ          { $$ = $1; }
	| ANDAND        { $$ = $1; }
	| OROR          { $$ = $1; }
	| PLUSPLUS      { $$ = $1; }
	| MINUSMINUS    { $$ = $1; }
	| ','           { $$ = $1; }
	| ARROWSTAR     { $$ = $1; }
	| ARROW         { $$ = $1; }
	| '(' ')'       { $$ = alctree( PARENS, 2, $1, $2 ); }
	| '[' ']'       { $$ = alctree( BRACKETS, 2, $1, $2 ); }
	;

/*----------------------------------------------------------------------
 * Templates.
 *----------------------------------------------------------------------*/

template_declaration:
	EXPORT_opt TEMPLATE '<' template_parameter_list '>' declaration { yyerror("Templates not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	;

template_parameter_list:
	template_parameter { yyerror("Templates not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	| template_parameter_list ',' template_parameter { yyerror("Templates not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	;

template_parameter:
	type_parameter { yyerror("Templates not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	| parameter_declaration { yyerror("Templates not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	;

type_parameter:
	  CLASS identifier                                          { $$ = alctree(TYPE_PARAM1, 2, $1, $2); }
	| CLASS identifier '=' type_id                              { $$ = alctree(TYPE_PARAM2, 3, $1, $2, $4); }
	| TYPENAME identifier                                       { $$ = alctree(TYPE_PARAM1, 2, $1, $2); }
	| TYPENAME identifier '=' type_id                           { $$ = alctree(TYPE_PARAM2, 3, $1, $2, $4); }
	| TEMPLATE '<' template_parameter_list '>' CLASS identifier { yyerror("Templates not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	| TEMPLATE '<' template_parameter_list '>' CLASS identifier '=' template_name { yyerror("Templates not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	;

template_id:
	template_name '<' template_argument_list '>'                { yyerror("Templates not supported in 120++.\n"); $$ = NULL; }
	;

template_argument_list:
	template_argument                                           { yyerror("Templates not supported in 120++:\n"); unsupported_error++; $$ = NULL; }
	| template_argument_list ',' template_argument              { yyerror("Templates not supported in 120++.\n"); unsupported_error++; $$ = NULL; }
	;

template_argument:
	assignment_expression           { yyerror("Templates not supported."); unsupported_error++; $$ = NULL; }
	| type_id                       { yyerror("Templates not supported."); unsupported_error++; $$ = NULL; }
	| template_name                 { yyerror("Templates not supported."); unsupported_error++; $$ = NULL; }
	;

explicit_instantiation:
	TEMPLATE declaration            { yyerror("Templates not supported."); unsupported_error++; $$ = NULL; }
	;

explicit_specialization:
	TEMPLATE '<' '>' declaration    { yyerror("Templates not supported."); $$ = NULL; }
	;

/*----------------------------------------------------------------------
 * Exception handling.
 *----------------------------------------------------------------------*/

try_block:
	TRY compound_statement handler_seq                  { $$ = alctree( TRY_BLOCK, 2, $1, $2 ); }
	;

function_try_block:
	TRY ctor_initializer_opt function_body handler_seq  { $$ = alctree( FUNC_TRY_BLOCK, 3, $1, $2, $3 ); }
	;

handler_seq:
	handler handler_seq_opt                             { $$ = alctree( HANDLER_SEQ, 2, $1, $2 ); }
	;

handler:
	CATCH '(' exception_declaration ')' compound_statement { $$ = alctree( HANDLER, 3, $1, $3, $5 ); }
	;

exception_declaration:
	type_specifier_seq declarator                       { $$ = alctree( EXCEP_DECL1, 2, $1, $2 ); }
	| type_specifier_seq abstract_declarator            { $$ = alctree( EXCEP_DECL2, 2, $1, $2 ); }
	| type_specifier_seq                                { $$ = $1; }
	| ELLIPSIS                                  { yyerror("Ellipsis not supported."); $$ = NULL; }
	;
        
throw_expression:
	THROW assignment_expression_opt                     { $$ = alctree( THROW_EXPR, 2, $1, $2 ); }
	;

exception_specification:
	THROW '(' type_id_list_opt ')'                      { $$ = alctree( EXCEP_SPEC, 2, $1, $3 ); }
	;

type_id_list:
	type_id                                             { $$ = $1; }
	| type_id_list ',' type_id                          { $$ = alctree( TRY_BLOCK, 3, $1, $2, $3 ); }
	;

/*----------------------------------------------------------------------
 * Epsilon (optional) definitions.
 *----------------------------------------------------------------------*/

declaration_seq_opt:
	/* epsilon */ { $$ = NULL; }
	| declaration_seq { $$ = $1; }
	;

nested_name_specifier_opt:
	/* epsilon */ { $$ = NULL; }
	| nested_name_specifier { $$ = $1; }
	;

expression_list_opt:
	/* epsilon */ { $$ = NULL; }
	| expression_list { $$ = $1; }
	;

COLONCOLON_opt:
	/* epsilon */ { $$ = NULL; }
	| COLONCOLON { $$ = $1; }
	;

new_placement_opt:
	/* epsilon */ { $$ = NULL; }
	| new_placement { $$ = $1; }
	;

new_initializer_opt:
	/* epsilon */ { $$ = NULL; }
	| new_initializer { $$ = $1; }
	;

new_declarator_opt:
	/* epsilon */ { $$ = NULL; }
	| new_declarator { $$ = $1; }
	;

expression_opt:
	/* epsilon */ { $$ = NULL; }
	| expression { $$ = $1; }
	;

statement_seq_opt:
	/* epsilon */ { $$ = NULL; }
	| statement_seq { $$ = $1; }
	;

condition_opt:
	/* epsilon */ { $$ = NULL; }
	| condition { $$ = $1; }
	;

enumerator_list_opt:
	/* epsilon */     { $$ = NULL; }
	| enumerator_list { $$ = $1; }
	;

initializer_opt:
	/* epsilon */ { $$ = NULL; }
	| initializer { $$ = $1; }
	;

constant_expression_opt:
	/* epsilon */
	| constant_expression { $$ = $1; }
	;

abstract_declarator_opt:
	/* epsilon */
	| abstract_declarator { $$ = $1; }
	;

type_specifier_seq_opt:
	/* epsilon */
	| type_specifier_seq { $$ = $1; }
	;

direct_abstract_declarator_opt:
	/* epsilon */
	| direct_abstract_declarator { $$ = $1; }
	;

ctor_initializer_opt:
	/* epsilon */
	| ctor_initializer { $$ = $1; }
	;

COMMA_opt:
	/* epsilon */
	| ',' { $$ = $1; }
	;

member_specification_opt:
	/* epsilon */
	| member_specification { $$ = $1; }
	;

SEMICOLON_opt:
	/* epsilon */
	| ';' { $$ = $1; }
	;

conversion_declarator_opt:
	/* epsilon */
	| conversion_declarator { $$ = $1; }
	;

EXPORT_opt:
	/* epsilon */
	| EXPORT { $$ = $1; }
	;

handler_seq_opt:
	/* epsilon */
	| handler_seq { $$ = $1; }
	;

assignment_expression_opt:
	/* epsilon */
	| assignment_expression { $$ = $1; }
	;

type_id_list_opt:
	/* epsilon */
	| type_id_list { $$ = $1; }
	;

%%

void
yyerror(char *s)
{
    unsupported_error++;
    fprintf(stderr, "%d: %s\n", lineno, s);
}
