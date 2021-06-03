/*

Group: A- Assignment 1:
Write a program to implement Pass-1 of two pass assembler for Symbol and
Literal processing (for hypothetical instruction set) consider following cases:
i. Forward References
ii. DS and DC statements
iii. START, EQU, LTORG, END
iv. Error Handling
*/

#include<stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct mt
{
char menomic[10];
char class1[10];
int opcode;
int len;
}mt;

mt mot[18]={
{"STOP","IS",0,1},
{"ADD","IS",1,1},
{"SUB","IS",2,1},
{"MULT","IS",3,1},
{"MOVER","IS",4,1},
{"MOVEM","IS",5,1},

{"COMP","IS",6,1},
{"BC","IS",7,1},
{"DIV","IS",8,1},
{"READ","IS",9,1},
{"PRINT","IS",10,1},
{"DS","DL",1,1},
{"DC","DL",2,1},
{"START","AD",1,1},
{"END","AD",2,1},
{"ORIGIN","AD",3,1},
{"EQU","AD",4,1},
{"LTORG","AD",5,1}
};

typedef struct symtab
{
char sname[10];
int address;

}symtab;

symtab st[20];

typedef struct regcode
{
char rname[10];
int rcode;
}regcode;

regcode reg[4]={{"AREG",1},{"BREG",2},{"CREG",3},{"DREG",4}};

typedef struct littab

{
char lit[10];
int address;
}littab;

littab lt[10];

typedef struct pooltab
{
int first;
int hliterals;
}pooltab;

pooltab ptab[10];

int LC=0;
int sc=0;
int littabptr=1;
int pooltabptr=1;

int search(char tok[10])
{
int i;
for(i=0;i<sc;i++)
if(strcmp(st[i].sname,tok)==0)
return i;

return -1;
}

int validity(char tok[10])
{
int i;

for(i=0;i<18;i++)
if(strcmp(mot[i].menomic,tok)==0)
return i;

return -1;
}

int rcode(char tok[10])
{
int i;
for(i=0;i<4;i++)
if(!strcmp(reg[i].rname,tok))
return reg[i].rcode;

return -1;
}

int main()
{
FILE *fp,*fp1;
fp=fopen("ass1.asm","r");
fp1=fopen("intermediate.txt","w");

ptab[1].first=1;
ptab[1].hliterals=0;

char tok1[10],ch,c[10],b[10],tok2[10],tok3[10],tok4[10],str[80];
int w,i,j,k,n,o;
while(fgets(str,80,fp))
{
int n = sscanf(str,"%s%s%s%s",tok1,tok2,tok3,tok4);
switch(n)
{
case 4:

strcpy(st[sc].sname,tok1);
st[sc].address=LC;
strcpy(tok1,tok2);
strcpy(tok2,tok3);
strcpy(tok3,tok4);
sc++;

case 3:
if(strcmp(tok2,"EQU")==0)
{
o=search(tok1);
if(o==-1)
{
strcpy(st[sc].sname,tok1);
sc++;
o=sc-1;
}
w=search(tok3);
if(w>=0 && w<=sc)
{
//LC=st[w].address;
//fprintf(fp1,"\t(c,%d)\n",LC);
st[o].address=st[w].address;
}
else
{
for(i=0;i<strlen(tok3);i++)
{
if(tok3[i]=='+' || tok3[i]=='-')
break;
else
b[i]=tok3[i];

}
b[i]='\0';
w=search(b);
ch=tok3[i];
for(k=0,j=i+1;j<strlen(tok3);j++,k++)
c[k]=tok3[j];
c[k]='\0';
if(w!=-1)
{
if(ch=='+')
st[o].address=st[w].address + atoi(c);
else if(ch=='-')
st[o].address=st[w].address - atoi(c);
}
}
fprintf(fp1,"%d\t(AD,4)\n",LC);
//fprintf(fp1,"\t(s,%d)\n",w);
}
else if(strcmp(tok2,"DS")==0)
{
w=search(tok1);
if(w==-1)
{
strcpy(st[sc].sname,tok1);
st[sc].address=LC;
sc++;
}
else
st[w].address=LC;
fprintf(fp1,"%d\t(DL,01)\t(c,%s)\n",LC,tok3);
LC+=atoi(tok3);
}
else if(strcmp(tok2,"DC")==0)

{
w=search(tok1);
st[w].address=LC;
fprintf(fp1,"%d\t(DL,01)\t(c,%s)\n",LC,tok3);
LC++;
}
else
{
if(validity(tok1)==-1)
printf("Invalid Menomic");
else
{

fprintf(fp1,"%d\t(%s,%d)\t%d",LC,mot[validity(tok1)].class1,validity(tok1),rcode(tok2));

if(tok3[0]=='=')
{
ptab[pooltabptr].hliterals++;
for(i=ptab[pooltabptr].first;i<=littabptr-1;i++)
if(strcmp(tok3,lt[i].lit)==0)
break;
if(littabptr==1 || i>littabptr-1)
{
strcpy(lt[littabptr].lit,tok3);
littabptr++;
}
fprintf(fp1,"\t(L,%d)\n",littabptr-1);
}
else
{
w=search(tok3);
if(w==-1)
{
strcpy(st[sc].sname,tok3);

fprintf(fp1,"\t(S,%d)\n",sc);
sc++;
}
else
fprintf(fp1,"\t(S,%d)\n",w);

}
LC++;
}
}
break;

case 2:
if(strcmp(tok1,"START")==0)
{
LC=atoi(tok2);
fprintf(fp1,"\t(AD,1)\t(c,%s)\n",tok2);
}
else if(!strcmp(tok1,"ORIGIN"))
{
fprintf(fp1,"%d\t(AD,3)",LC);
w=search(tok2);
if(w>=0 && w<=sc)
{
LC=st[w].address;
fprintf(fp1,"\t(c,%d)\n",LC);
}
else
{
for(i=0;i<strlen(tok2);i++)
{
if(tok2[i]=='+' || tok2[i]=='-')
break;
else

b[i]=tok2[i];

}
b[i]='\0';
w=search(b);
ch=tok2[i];
for(k=0,j=i+1;j<strlen(tok2);j++,k++)
c[k]=tok2[j];
c[k]='\0';
if(w!=-1)
{
if(ch=='+')
LC=st[w].address+atoi(c);
else if(ch=='-')
LC=st[w].address-atoi(c);

}
fprintf(fp1,"\t(C,%d)\n",LC);
}
}
else if(!strcmp(tok1,"READ"))
{

fprintf(fp1,"%d\t(%s,%d)",LC,mot[validity(tok1)].class1,validity(tok1));

strcpy(st[sc].sname,tok2);
fprintf(fp1,"\t(S,%d)\n",sc);
sc++;
LC++;
}
else if(strcmp(tok1,"PRINT")==0)
{

fprintf(fp1,"%d\t(%s,%d)",LC,mot[validity(tok1)].class1,validity(tok1));

w=search(tok2);
fprintf(fp1,"\t(S,%d)\n",w);
LC++;
}

else
printf("\nInvalid Menomic");
break;

case 1:
if(strcmp(tok1,"STOP")==0)
{
fprintf(fp,"%d\t(IS,0)",LC);
LC++;
break;
}
if(validity(tok1)==-1)
printf("\nInvalid Menomic");
if(ptab[pooltabptr].hliterals>0)
{
if(!strcmp(tok1,"END"))
{

fprintf(fp1,"%d\t(AD,2)\n",LC);
for(i=ptab[pooltabptr].first;i<=littabptr-1;i++)
{
lt[i].address=LC;
LC++;
//fprintf(fp1,"\t(c,%s)\n",lt[i].lit);

}
pooltabptr++;
}
else if(!strcmp(tok1,"LTORG"))
{
fprintf(fp1,"%d\t(AD,5)\n",LC);
for(i=ptab[pooltabptr].first;i<=littabptr-1;i++)
{
lt[i].address=LC;

LC++;
//fprintf(fp1,"\t(c,%s)\n",lt[i].lit);

}
pooltabptr++;
ptab[pooltabptr].first=littabptr;
}

}
break;

}
}
printf("\nSYMBOL TABLE\n--------------");
for(i=0;i<sc;i++)
printf("\n%s\t%d",st[i].sname,st[i].address);
printf("\n\nLITERAL TABLE\n--------------");
for(i=1;i<littabptr;i++)
printf("\n%s\t%d",lt[i].lit,lt[i].address);
printf("\n\nPOOL TABLE\n--------------");
for(i=1;i<pooltabptr;i++)
printf("\n%d\t%d",ptab[i].first,ptab[i].hliterals);
printf("\n");
fclose(fp1);
fclose(fp);
}

/*
*******************************************************************
OUTPUT:-

Invalid Menomic
SYMBOL TABLE
--------------
A 208

LOOP 202
B 210
NEXT1 207
NEXT2 202

LITERAL TABLE
--------------
='5' 205
='1' 206
='1' 211

POOL TABLE
--------------
1 2
3 1

--------------------------------
Process exited after 0.07372 seconds with return value 0
Press any key to continue . . .
*******************************************************************

Intermediate TEXT file

(AD,1) (c,200)
200 (IS,4) 1 (L,1)
201 (IS,5) 1 (S,0)
202 (IS,4) 1 (S,0)
203 (IS,4) 3 (S,2)
204 (IS,1) 3 (L,2)
205 (AD,5)
207 (IS,2) 1 (L,3)
208 (AD,3) (C,208)
208 (DL,01) (c,2)

210 (DL,01) (c,1)
211 (AD,4)
211 (AD,2)
ASM file

START 200
MOVER AREG ='5'
MOVEM AREG A
LOOP MOVER AREG A
MOVER CREG B
ADD CREG ='1'
LTORG
NEXT1 SUB AREG ='1'
ORIGIN LOOP+6
MUL CREG B
A DS 2
B DC 1
NEXT2 EQU LOOP
END
*/