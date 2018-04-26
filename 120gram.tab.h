/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_120GRAM_TAB_H_INCLUDED
# define YY_YY_120GRAM_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER = 259,
    FLOATING = 260,
    CHARACTER = 261,
    STRING = 262,
    TYPEDEF_NAME = 263,
    NAMESPACE_NAME = 264,
    CLASS_NAME = 265,
    ENUM_NAME = 266,
    TEMPLATE_NAME = 267,
    ELLIPSIS = 268,
    COLONCOLON = 269,
    DOTSTAR = 270,
    ADDEQ = 271,
    SUBEQ = 272,
    MULEQ = 273,
    DIVEQ = 274,
    MODEQ = 275,
    XOREQ = 276,
    ANDEQ = 277,
    OREQ = 278,
    SL = 279,
    SR = 280,
    SREQ = 281,
    SLEQ = 282,
    EQ = 283,
    NOTEQ = 284,
    LTEQ = 285,
    GTEQ = 286,
    ANDAND = 287,
    OROR = 288,
    PLUSPLUS = 289,
    MINUSMINUS = 290,
    ARROWSTAR = 291,
    ARROW = 292,
    ASM = 293,
    AUTO = 294,
    BOOL = 295,
    BREAK = 296,
    CASE = 297,
    CATCH = 298,
    CHAR = 299,
    CLASS = 300,
    CONST = 301,
    CONST_CAST = 302,
    CONTINUE = 303,
    DEFAULT = 304,
    DELETE = 305,
    DO = 306,
    DOUBLE = 307,
    DYNAMIC_CAST = 308,
    ELSE = 309,
    ENUM = 310,
    EXPLICIT = 311,
    EXPORT = 312,
    EXTERN = 313,
    FALSE = 314,
    FLOAT = 315,
    FOR = 316,
    FRIEND = 317,
    GOTO = 318,
    IF = 319,
    INLINE = 320,
    INT = 321,
    LONG = 322,
    MUTABLE = 323,
    NAMESPACE = 324,
    NEW = 325,
    OPERATOR = 326,
    PRIVATE = 327,
    PROTECTED = 328,
    PUBLIC = 329,
    REGISTER = 330,
    REINTERPRET_CAST = 331,
    RETURN = 332,
    SHORT = 333,
    SIGNED = 334,
    SIZEOF = 335,
    STATIC = 336,
    STATIC_CAST = 337,
    STRUCT = 338,
    SWITCH = 339,
    TEMPLATE = 340,
    THIS = 341,
    THROW = 342,
    TRUE = 343,
    TRY = 344,
    TYPEDEF = 345,
    TYPEID = 346,
    TYPENAME = 347,
    UNION = 348,
    UNSIGNED = 349,
    USING = 350,
    VIRTUAL = 351,
    VOID = 352,
    VOLATILE = 353,
    WCHAR_T = 354,
    WHILE = 355
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef  struct tree*  YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_120GRAM_TAB_H_INCLUDED  */
