//Name : Yash Dewangan
//Div2 - T20230
//Batch – B
///Write a program to solve the travelling salesman problem and to print the path and the cost using Branch and Bound.

#include<stdio.h>

 int visited[10],n,cost[10],l=0;
 static int node_no=1;
int a[10][10];

int find_row_min(int b[][10],int r);
int find_col_min(int b[][10],int c);
int check_visited(int k);
int min1(int temp[][2],int q);
 void get_matrix(int a[][10])
 {
 int i,j;
 printf("\nEnter No. of Cities: ");
 scanf("%d",&n);
 printf("\nEnter Cost Matrix:\n");
 for( i=0;i<n;i++)
 {
 printf("\n Enter Elements of Row # : %d\n",i+1);
 for( j=0;j<n;j++)
 {
 scanf("%d",&a[i][j]);
 }
 visited[i]=-1; // initially visited array is set to -1
 }

 printf("\n\nThe Given cost matrix is:\n\n");
 for( i=0;i<n;i++)
 {
 printf("\n");
 for( j=0;j<n;j++)
 printf("\t%d",a[i][j]);
 }
 }

 void display_path()
  {
    int i;
    printf("\n\nThe Path of tour is:\n\n");
    for(i=0;i<n;i++)
    printf("\t%d",visited[i]+1);

    printf("\t1");
 printf("\n\nMinimum cost of tour is:");
 printf("%d",cost[l-1]);
 }

 int reduced_matrix(int b[][10])
 {
 int i,j,reduced_sum=0,min;
 for(i=0;i<n;i++)  //row minimization
 {
 min=find_row_min(b,i);
 reduced_sum+=min;
 for(j=0;j<n;j++)
   {
    if(b[i][j]!=99)
     b[i][j]-=min;
   }
 }

 for(i=0;i<n;i++)  // column minimization
 {
 min=find_col_min(b,i);
 reduced_sum+=min;
 for(j=0;j<n;j++)
   {
    if(b[j][i]!=99)
     b[j][i]-=min;
   }
 }
 printf("\nReduced Matrix for node no:%d is :\n",node_no++);
//getch();
 for(i=0;i<n;i++)
 {
 printf("\n");
 for(j=0;j<n;j++)
 {
 printf("\t%d",b[i][j]);
 }
 }
 return reduced_sum;
 }

 int find_row_min(int b[][10],int r)
 {
  int min=99,j;   //min=999
   for(j=0;j<n;j++)
   {
   if(b[r][j]<min)
    min= b[r][j];
   }
  if(min==99)
     min=0;
    return min;
 }

 int find_col_min(int b[][10],int c)
 {  int i,min=99;
    for(i=0;i<n;i++)
    {
    if(b[i][c]<min)
    min= b[i][c];
    }
   if(min==99)
    min=0;

  return min;
 }

 void dynamic_reduction(int a[][10])
 {
  int temp[10][2],q,p,m[10][10],ref[10][10],sum=0,node_cost=99;
  int i,j,k;


  while(l<n)
    {
    q=0;

      for(i=0;i<n;i++)
        {
       p=check_visited(i);
       if(p==0)

 	temp[q++][0]=i;
 	}


     for(i=0;i<q;i++)
 	{
 	   for(k=0;k<n;k++) //copy full reduced matrix  a to matrix m for dynamic reduction;
 	      {
 	     for(j=0;j<n;j++)
 	       {
 	       m[k][j]=a[k][j];
 	       }
 	      }

        for(k=0;k<l;k++)
 	 {
 	 for(j=0;j<n;j++)
 	    {
 	   m[visited[k]][j]=99;         // make row infinity for visited city
 	    }
 	   }

        for(k=1;k<l;k++)
 	  {
 	  for(j=0;j<n;j++)
 	    {
 	    m[j][visited[k]]=99;        // make col infinity  for next visited city
 	    }
 	   }

    for(j=0;j<n;j++)   // make col infinity for the city to be visited
      {
      m[j][temp[i][0]]=99;
      }

  for(j=1;j<l;j++) //make m[j][i] infinity  for i to j path
      {
       m[visited[j]][0]=99;
      }
    m[temp[i][0]][0]=99;
   sum=reduced_matrix(m);
   temp[i][1]=cost[l-1] + sum + a[visited[l-1]][temp[i][0]];

   printf("\ncost of node no %d =%d",node_no-1,temp[i][1]);


   //modifications done here

   if(node_cost>temp[i][1])
    {
 	node_cost=temp[i][1];
 	  //p=temp[i][0];
 	      for(k=0;k<n;k++) //copy matrix m to ref for future reference;
 	      {
 	     for(j=0;j<n;j++)
 	       {
 	       ref[k][j]=m[k][j];
 	       }
 	      }
    }//store reference matrix

  }//for loop i

 //take minimum cost node as E-node
 p= min1(temp,q);
  visited[l]=temp[p][0];
  cost[l++]=temp[p][1];

 printf("\n\n minimum cost city is =%d and its cost is :%d",temp[p][0]+1,temp[p][1]);

// modifications done here to copy ref matrix to x
	 for(k=0;k<n;k++) //copy matrix m to ref for future reference;
 	      {
 	     for(j=0;j<n;j++)
 	       {
 	       a[k][j]=ref[k][j];
 	       }
 	      }


  }//while loop
 }

 int min1(int temp[][2],int q)
 {
   int i,j,small=99;

   for(i=0;i<q;i++)
   {
    if(temp[i][1]<small)
    {
    small=temp[i][1];
    j=i;
    }
   }
    return j;
 }

 int check_visited(int k)
 {
 int i;
  for(i=0;i<l;i++)
   { if(visited[i]==k)
     return 1;
   }
  return 0;
 }
 int main()
 {
 
 	int a[10][10];
 	get_matrix(a);
 	visited[l]=0;
 	cost[l++]=reduced_matrix(a);
 	dynamic_reduction(a);
 	display_path();
    return 0;
}

/*
****************OUTPUT*******************

shivam@shivam-VirtualBox:~$ gcc ASS6.c
shivam@shivam-VirtualBox:~$ ./a.out

Enter No. of Cities: 4

Enter Cost Matrix:

 Enter Elements of Row # : 1
0
2
4
7

 Enter Elements of Row # : 2
2
0
3
0

 Enter Elements of Row # : 3
4
3
0
6

 Enter Elements of Row # : 4
7
0
6
0


The Given cost matrix is:


        0       2       4       7
        2       0       3       0
        4       3       0       6
        7       0       6       0
Reduced Matrix for node no:1 is :

        0       2       4       7
        2       0       3       0
        4       3       0       6
        7       0       6       0
Reduced Matrix for node no:2 is :

        99      99      99      99
        99      99      3       0
        0       99      0       6
        3       99      6       0
cost of node no 2 =6
Reduced Matrix for node no:3 is :

        99      99      99      99
        0       0       99      0
        99      0       99      3
        5       0       99      0
cost of node no 3 =9
Reduced Matrix for node no:4 is :

        99      99      99      99
        0       0       3       99
        2       3       0       99
        99      0       6       99
cost of node no 4 =9

 minimum cost city is =2 and its cost is :6
Reduced Matrix for node no:5 is :

        99      99      99      99
        99      99      99      99
        99      99      99      0
        0       99      99      0
cost of node no 5 =18
Reduced Matrix for node no:6 is :

        99      99      99      99
        99      99      99      99
        0       99      0       99
        99      99      0       99
cost of node no 6 =12

 minimum cost city is =4 and its cost is :12
Reduced Matrix for node no:7 is :

        99      99      99      99
        99      99      99      99
        99      99      99      99
        99      99      99      99
cost of node no 7 =18

 minimum cost city is =3 and its cost is :18

The Path of tour is:

        1       2       4       3       1

Minimum cost of tour is:18
*/
