/* 
Name: Shrusti Bharambe 
Roll no: T20212 
Assignment: 4 
Title: Write a program to implement Lexical Analyzer for subset of C.  */ 
#include <stdio.h> 
#include <stdlib.h> 
#include <ctype.h> 
#include <string.h> 
int literalTableIndex = 0, identifierTableIndex = 0, terminalTableIndex =  0, uniformSymbolTableIndex = 0; 
typedef struct 
{ 
int index, literal; 
} LiteralTableEntry; 
LiteralTableEntry literalTable[1000]; 
void addLiteralTableEntry(int literal) 
{ 
LiteralTableEntry entry; 
int i = 0; 
entry.index = literalTableIndex; 
entry.literal = literal; 
literalTable[literalTableIndex++] = entry;
} 
void printLiteralTable() 
{ 
int i = 0; 
printf("\n\n%25s", "Literal Table"); 
printf("\nIndex Literal"); 
for (i = 0; i < literalTableIndex; i++) 
{ 
printf("\n%5d %7d",  
literalTable[i].index, literalTable[i].literal); } 
} 
typedef struct 
{ 
int index; 
char identifier[100]; 
} IdentifierTableEntry; 
IdentifierTableEntry identifierTable[1000]; void addIdentifierTableEntry(char identifier[100]) { IdentifierTableEntry entry; 
int i = 0, found = 0; 
for (i = 0; i < identifierTableIndex && !found; i++) { entry = identifierTable[i]; 
if (strcmp(entry.identifier, identifier) == 0) { found = 1; 
} 
} 
if (!found) 
{
entry.index =  
identifierTableIndex; strcpy(entry.identifier , identifier); 
identifierTable[identifierTableIndex++] = entry; } } 
void printIdentifierTable() 
{ 
int i = 0; 
printf("\n\n%25s", "Identifier  Table"); printf("\nIndex Identifier"); 
for (i = 0; i < identifierTableIndex; i++) { printf("\n%5d %s",  
identifierTable[i].index, identifierTable[i].identifier); } 
} 
typedef struct 
{ 
int index; 
char symbol[100]; 
} TerminalTableEntry; 
TerminalTableEntry terminalTable[1000]; void  addTerminalTableEntry(char symbol[100]) { TerminalTableEntry entry; 
int i = 0; 
entry.index = terminalTableIndex; 
strcpy(entry.symbol, symbol); 
terminalTable[terminalTableIndex++] = entry; } 
void printTerminalTable() 
{
int i = 0; 
printf("\n\n%25s", "Terminal Table"); 
printf("\nIndex Symbol"); 
for (i = 0; i < terminalTableIndex; i++) 
{ 
printf("\n%5d %s", terminalTable[i].index, 
terminalTable[i].symbol); 
} 
} 
typedef struct 
{ 
int index; 
char class1[100], symbol[100]; 
} UniformSymbolTableEntry; 
UniformSymbolTableEntry uniformSymbolTable[1000]; void  addUniformSymbolTableEntry(char class1[100], char symbol[100]) { UniformSymbolTableEntry entry; 
int i = 0; 
entry.index = uniformSymbolTableIndex; 
strcpy(entry.symbol, symbol); 
strcpy(entry.class1, class1); 
uniformSymbolTable[uniformSymbolTableIndex++] = entry; } void printUniformSymbolTable() 
{ 
int i = 0; 
printf("\n\n%25s", "Uniform Symbol  Table"); printf("\nIndex Class Symbol"); 
for (i = 0; i < uniformSymbolTableIndex; i++) {
printf("\n%5d %5s %s",  
uniformSymbolTable[i].index, uniformSymbolTable[i].class1, uniformSymbolTable[i].symbol); 
} 
} 
int isOperatorChar(char ch) 
{ 
char operators[] = {'+', '-', '*', '/', '=', 
'<', '>', '&', '|', '%', 
'=', '!', '~', '^', '?', 
':'}; 
int i = 0, noOfOperators = 16; 
for (i = 0; i < noOfOperators; i++) 
{ 
if (ch == operators[i]) 
{ 
return 1; 
} 
} 
return 0; 
} 
int isOperatorString(char str[3]) 
{ 
char operators[][3] = {"+", "-", "*", "/", "=", "<",  ">", "&", "|", "||", "?:", "!", "~", "^", "?", "&&",  "+=", "-=", "*=", "/=", "==", "<=", ">=", "&=",  "|=", "^=", "!=", "~=", "++", "--"}; int i = 0,  
noOfOperators = 30;
for (i = 0; i < noOfOperators; i++) { if (strcmp(str, operators[i]) == 0) { return 1; 
} 
} 
return 0; 
} 
int isReservedWord(char str[100]) { 
char reserved[][20] = { 
"main", "void", "float", "int",  
"char", "printf", "scanf", "clrscr", "getch"}; int i = 0, noOfReserved = 9; for (i = 0; i  < noOfReserved; i++) { 
if (strcmp(str, reserved[i]) == 0) { return 1; 
} 
} 
return 0; 
} 
int isDelimiter(char ch) 
{ 
char delimiters[] = { 
'(', ')', ',', 39, 59, 
'{', '}'}; 
// ASCII 39 = ' 
// ASCII 59 = ;
int i = 0, noOfDelimiters = 7; for (i = 0; i  
< noOfDelimiters; i++) { 
if (ch == delimiters[i]) 
{ 
return 1; 
} 
} 
return 0; 
} 
void printTables() 
{ 
printLiteralTable(); 
printIdentifierTable(); 
printTerminalTable(); 
printUniformSymbolTable(); 
} 
int main() 
{ 
char ch, ch1, chInStr, file_name[50] = "sp-lexical-analyzer input.txt", str[100]; 
int strIndex = 0; 
FILE *fp; 
fp = fopen(file_name, "r"); // read mode 
if (fp == NULL) 
{
perror("Error while opening the file.\n"); exit(EXIT_FAILURE); 
} 
ch = fgetc(fp); 
while (ch != EOF) 
{ 
if (ch == '"') 
{ 
str[0] = ch; 
str[1] = '\0'; 
addUniformSymbolTableEntry("TRM",  str); addTerminalTableEntry(str); 
strIndex = 0; 
while ((chInStr = fgetc(fp)) != '"') { str[strIndex] = chInStr; 
strIndex++; 
} 
str[strIndex] = '\0'; 
addUniformSymbolTableEntry("STR",  str); addTerminalTableEntry(str); 
str[0] = chInStr; 
str[1] = '\0'; 
addUniformSymbolTableEntry("TRM",  str); addTerminalTableEntry(str); 
ch = fgetc(fp); 
}
else if (isOperatorChar(ch)) 
{ 
strIndex = 0; 
ch1 = ch; 
while (isOperatorChar(ch)) 
{ 
str[strIndex] = ch; 
strIndex++; 
ch = fgetc(fp); 
} 
str[strIndex] = '\0'; 
if (isalnum(ch) && ch1 == '&' && strIndex == 1) { // Handle tokens like '&abc' 
while (isalnum(ch)) 
{ 
str[strIndex] = ch; 
strIndex++; 
ch = fgetc(fp); 
} 
str[strIndex] = '\0'; 
addUniformSymbolTableEntry("TRM",  str); addTerminalTableEntry(str); 
} 
else if (isOperatorString(str)) 
{ 
addTerminalTableEntry(str); 
addUniformSymbolTableEntry("OPR", str); }
} 
else if (isdigit(ch)) 
{ 
strIndex = 0; 
while (isdigit(ch)) 
{ 
str[strIndex] = ch; 
strIndex++; 
ch = fgetc(fp); 
} 
str[strIndex] = '\0'; 
addLiteralTableEntry(atoi(str)); 
addUniformSymbolTableEntry("LIT",  str); addTerminalTableEntry(str); } 
else if (isalnum(ch)) 
{ 
strIndex = 0; 
while (isalnum(ch)) 
{ 
str[strIndex] = ch; 
strIndex++; 
ch = fgetc(fp); 
} 
str[strIndex] = '\0'; 
if (isReservedWord(str)) 
{
addUniformSymbolTableEntry("TRM",  str); addTerminalTableEntry(str); 
} 
else 
{ 
addUniformSymbolTableEntry("IDN",  str); addIdentifierTableEntry(str); 
addTerminalTableEntry(str); 
} 
} 
else if (isDelimiter(ch)) 
{ 
str[0] = ch; 
str[1] = '\0'; 
addTerminalTableEntry(str); 
addUniformSymbolTableEntry("TRM", str); ch =  fgetc(fp); 
} 
else if (isspace(ch)) 
{ 
ch = fgetc(fp); 
} 
else 
{ 
printf("Unknown character"); 
ch = fgetc(fp); 
} 
} 
fclose(fp);
printTables(); 
return 0; 
} 
 
//INPUT: 
// int main() 
// { 
// float ch1,ch2; 
// int sno; 
// //clrscr(); 
// scanf( "%f%d", &ch1, &ch2 ); 
// ch2 = 53; 
// ch2 = ch1 + sno; 
// ch1++; 
// printf("%f", ch2); 
// //getch();
// return 0; 
// }
/* 
**************************OUTPUT************************* Liter al Table 
Index Literal 
0 53 
Identifier Table 
Index Identifier 
0 ch1 
1 ch2 
2 sno
Terminal Table 
Index Symbol 0 void 1  
main 2 ( 
3 ) 
4 { 
5 float 6  
ch1 
7 , 
8 ch2 
9 ; 
10 int 
11 sno 12 ; 
13 clrscr 14 ( 15 ) 
16 ; 
17 scanf 18 ( 19 %f%d 20 , 21 &ch1 22 , 23 &ch2 24 ) 25 ; 
26 ch2 27 = 28 53 
29 ; 
30 ch2 
31 = 
32 ch1 
33 + 
34 sno 
35 ; 
36 ch1
37 ++ 
38 ; 
39 printf 
40 ( 
41 %f 
42 , 
43 ch2 
44 ) 
45 ; 
46 getch 
47 ( 
48 ) 
49 ; 
50 } 
Uniform Symbol Table Index  Class Symbol 0 TRM void 1 TRM main 
2 TRM ( 
3 TRM ) 
4 TRM { 
5 TRM float 6 IDN  
ch1 7 TRM , 
8 IDN ch2 9 TRM ; 
10 TRM int 11 IDN  
sno 12 TRM ; 
13 TRM clrscr 14 TRM  ( 15 TRM ) 16 TRM ; 
17 TRM scanf 18 TRM  ( 19 STR %f%d 20  
TRM ,
21 TRM &ch1 22 TRM  , 
23 TRM &ch2 24 TRM  ) 25 TRM ; 
26 IDN ch2 27 OPR  = 28 LIT 53 29 TRM  ; 
30 IDN ch2 31 OPR  = 32 IDN ch1 
33 OPR + 34 IDN  
sno 35 TRM ; 
36 IDN ch1 37 OPR  ++ 38 TRM ; 
39 TRM printf 40 TRM  ( 41 STR %f 42 TRM , 43 IDN ch2 44 TRM  ) 45 TRM ; 
46 TRM getch 47  TRM ( 48 TRM ) 49  TRM ; 
50 TRM } */
