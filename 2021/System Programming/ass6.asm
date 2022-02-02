/* 
Name Shrusti Bharambe 
Roll No: T20212 
Batch: A 
Assignment 6 
Aim: Write a program to implement calculator using LEX and YACC  
*/ 
// Cal.y file 
%{ 
/* this is yacc specification */ 
#include <stdio.h> 
%} 
%token NAME 
%left '-' '+' 
%left '*' '/' 
%nonassoc UMINUS 
%% 
statement: NAME '=' exp 
| exp { printf("= %d\n",$1); } 
; 
exp: exp '+' exp { $$ = $1 + $3; } 
| exp '-' exp { $$ = $1 - $3; } 
| exp '*' exp { $$ = $1 * $3; } 
| exp '/' exp { $$ = $1 / $3; } 
| '-' exp %prec UMINUS { $$ = -$2; } 
| '(' exp ')' { $$ = $2; } 
| NUMBER { $$ = $1; }
; 
%% 
int main() 
{ 
yyparse(); 
} 
int yyerror() 
{ 
} 
int yywrap() 
{ 
return 1; 
} 
%{ 
/* this is yacc specification */  
#include <stdio.h> 
%} 
%token NAME 
%left '-' '+' 
%left '*' '/' 
%nonassoc UMINUS 
%% 
statement: NAME '=' exp 
| exp { printf("= %d\n",$1); } ; 
exp: exp '+' exp { $$ = $1 + $3; } | exp '-'  exp { $$ = $1 - $3; } | exp '*' exp { $$ = 
$1 * $3; } | exp '/' exp { $$ = $1 / $3; } |  '-' exp %prec UMINUS { $$ = -$2; } 
| '(' exp ')' { $$ = $2; } 
| NUMBER { $$ = $1; } 
; 
%% 
int main() 
{ 
yyparse(); 
} 
int yyerror() 
{ 
} 
int yywrap() 
{ 
return 1; 
} 
///cal.l 
%{ #include "y.tab.h" 
extern int yylval; 
%} 
%% 
[0-9]+ {yylval = atoi(yytext); return NUMBER; } [ \t] ; /* ignore whitespace */ 
\n return 0; /* logical EOF */
. return yytext[0]; /* common catch all , return any character otherwise not handled as a  single charcter token to parser */ 
%% 
/* 
OUTPUT: 
lex cal.l 
yacc -d cal.y 
cc -o cal lex.yy.c y.tab.c  
./cal 
3+4 
*/
