/*

Group: A Assignment: 2
Write a program to implement Pass-II of two-pass assembler for output of assignment 1
*/

#include<stdio.h>
#include<string.h>
#include <stdlib.h>
typedef struct symtab
{
char symbol[10];
int address;
}symtab;
typedef struct pooltable
{

int index;
int noofl;

}pooltable;

typedef struct ltable
{

char literal[10];
int address1;

}ltable;

symtab st[4]={{"LOOP",200},
{"A",206},
{"B",210},
{"C",211}};

pooltable pt[2]=
{
{1,2},
{3,0}
};

ltable lt[2]={
{"1",204},
{"2",209}
};

int main()
{
char tok1[40],tok2[40],tok3[40],tok4[40],str[40],temp[10]; int
i,k,dup,n;
FILE *fp1,*fp2;
fp1=fopen("a.txt","r");
fp2=fopen("pass2.txt","w");
while(fgets(str,80,fp1))
{

n=sscanf(str,"%s%s%s%s",tok1,tok2,tok3,tok4); switch(n)

{
case 4:
fprintf(fp2,"%s",tok1);

for(i=4,k=0;tok2[i]!=')';i++,k++) {
temp[k]=tok2[i];

}
temp[k]='\0';
fprintf(fp2," %d",atoi(temp));
fprintf(fp2," %s",tok3);
for(i=3,k=0;tok4[i]!=')';i++,k++) {
temp[k]=tok4[i];

}
temp[k]='\0';
dup=atoi(temp);
printf("**%d**\n",dup );
if(tok4[1]=='s')
{

dup=st[dup].address;
printf("%d\n",dup );
}
else
{
printf("--LB %d\n",dup );
dup=lt[dup-1].address1;
printf("--LA%d\n",dup);
}

fprintf(fp2," %d\n",dup);

break;
case 3:
fprintf(fp2,"%s",tok1);

if(tok2[4]=='2')
{
fprintf(fp2," 00\n");
}
else
{
fprintf(fp2," 00");
for(i=3,k=0;tok3[i]!=')';i++,k++) {
temp[k]=tok3[i];
}
temp[k]='\0';
dup=atoi(temp);
fprintf(fp2," %d\n",dup);
}
}//switch
}//while
fclose(fp1);
fclose(fp2);
return 0;
}
/*
OUTPUT:
**1**
206
**1**
--LB 1

--LA204
**2**
210
**3**
211
**2**
--LB 2
--LA209

--------------------------------
Process exited after 0.1324 seconds with return value 0
Press any key to continue . . .

*************************************************************** A text file
200 (AD,1) (c,200)
200 (IS,4) 1 (s,1)
201 (IS,4) 1 (L,1)
202 (IS,1) 2 (s,2)
203 (IS,2) 3 (s,3)
205 (IS,4) 1 (L,2)
206 (DL,2) (c,3)
210 (DL,1) (c,3)
211 (DL,1) (c,3)
********************************************* Pass2 TXT
file

200 00 200
200 4 1 206
201 4 1 204
202 1 2 210

203 2 3 211
205 4 1 209
206 00
210 00 3
211 00 3
*/