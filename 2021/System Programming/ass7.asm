/* 
Name Shrusti Bharambe 
Roll No: T20212 
Batch: A 
Assignment: 7 
Aim: Write a program for Intermediate code generation using LEX &YACC for Control  Flow statement ( Either While loop or Switch case) 
*/ 
//vwhile.l 
%{ 
#include<stdio.h> 
#include "y.tab.h" 
void yyerror(char *); 
extern int yylval; 
%} 
ALPHA [A-Za-z] 
DIGIT [0-9] 
%% 
while return WHILE; 
{ALPHA}({ALPHA}|{DIGIT})* return ID; 
{DIGIT}+ {yylval=atoi(yytext); return NUM;} 
[\n\t] yyterminate(); 
. return yytext[0]; 
%%
int yywrap(void) { return  1; 
} 
//vwhile1.y 
%{ 
#include<ctype.h>  
#include<stdio.h>  
#include<string.h> int  
yylex(void); 
void yyerror(char *); char  st[100][10]; 
int top=0; 
char p[2]="0"; 
char temp[2]="t"; int  
lnum=0; 
int start=1; 
extern char *yytext; %} 
%token ID NUM WHILE %right  '=' 
%left '+' '-' 
%left '*' '/' 
%left UMINUS 
%%
S : WHILE{lab1();}'(' E ')'{lab2();}E';'{lab3();} ; 
E : E '+'{push();} T{codegen();} 
| E '-'{push();} T{codegen();} 
| T 
; 
T : T '*'{push();} F{codegen();} 
| T '/'{push();} F{codegen();} 
| F 
; 
F : '(' E ')' 
| '-'{push();} F{codegen_umin();} %prec UMINUS |  ID{push();} 
| NUM{push();} 
; 
%% 
main() 
{ 
printf("Enter the expression : "); 
yyparse(); 
} 
push() 
{ 
strcpy(st[++top],yytext); 
} 
codegen() 
{
strcpy(temp,"t"); 
strcat(temp,p); 
printf("%s = %s %s %s\n",temp,st[top-2],st[top-1],st[top]); top-=2; 
strcpy(st[top],temp); 
p[0]++; 
} 
codegen_umin() 
{ 
strcpy(temp,"t"); 
strcat(temp,p); 
printf("%s = -%s\n",temp,st[top]); 
top--; 
strcpy(st[top],temp); 
p[0]++; 
} 
codegen_assign() 
{ 
printf("%s = %s\n",st[top-2],st[top]); 
top-=2; 
} 
lab1() 
{ 
printf("L%d: \n",lnum++); 
} 
lab2() 
{
strcpy(temp,"t"); 
strcat(temp,p); 
printf("%s= not %s\n",temp,st[top]); printf("if %s  goto L %d \n",temp,lnum); p[0]++; 
} 
lab3() 
{ 
printf("goto L%d \n",start); 
printf("L%d: \n",lnum); 
} 
void yyerror(char *s) 
{ 
fprintf(stderr, "%s\n", s); 
} 
/* 
OUTPUT : 
lex vwhile.l 
yacc -d vwhile1.y 
cc lex.yy.c y.tab.c 
./a.out 
while(a)a+2; 
*/
