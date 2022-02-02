/* 
Name: Shrusti Bharambe 
Roll: T20212 
Batch: A 
Group: A Assignment : 5 
Write a Program to implement a Recursive Descent Parser  */ 
#include<stdio.h> 
#include<string.h> 
#include<ctype.h> 
int i, flag; 
char input[20]; 
void E(); 
void T(); 
void E_(); 
void T_(); 
void F(); 
int main() 
{ 
i=0; 
flag=1; 
printf("Enter String : "); 
scanf("%s", input); 
E();
if(flag && i==strlen(input)) 
{ 
printf("String Accepted!\n"); 
} 
else 
{ 
printf("Error\n"); 
} 
return 0;
} 
void E() 
{ 
T(); 
E_(); 
} 
void E_() 
{ 
if(input[i]=='+' || input[i]=='-') 
{ 
i++; 
T(); 
E_(); 
} 
} 
void T() 
{ 
F(); 
T_();
} 
void T_() { 
if(input[i]=='*' || input[i]=='/') 
{ 
i++; 
F(); 
T_(); 
} 
} 
void F() 
{ 
if((input[i]>='a' && input[i]<='z') || isalnum(input[i])) { 
i++; 
} 
else 
if(input[i]=='(') 
{ 
i++; 
E(); 
if(input[i]==')') 
{ 
i++; 
} 
else 
{ 
flag=0; 
} 
} 
else 
{
flag=0; 
} 

} 
/* 
OUTPUT 
Enter String : (a+b)*c 
String Accepted! 
-------------------------------- 
Process exited after 12.56 seconds with return value 0 Press any key to continue . . . 
Enter String : (c+d*a 
Error 
-------------------------------- 
Process exited after 9.326 seconds with return value 0 Press any key to continue . . . */
