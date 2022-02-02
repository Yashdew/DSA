//Name : Yash Dewangan
//Div2 - T20230
//Batch – B

#include<stdio.h>
//#include<conio.h>
#include<stdlib.h>
#define inf 9999

struct edge
{
 int src,dest,wt;
};

struct node
{
int dis;
int pred;
};

struct Graph
{
int V;
int E;
struct edge *edg;
struct node *nd;
};

struct Graph *create(int V,int E)
{
 struct Graph *graph=(struct Graph *) malloc(sizeof(struct Graph));
 graph->V=V;
 graph->E=E;
 graph->edg= (struct edge *) malloc(graph->E* sizeof(struct edge));
 graph->nd=(struct node*)malloc(graph->V*sizeof(struct node));
 return(graph);

}
void print(struct Graph* graph,int n,int src)
{
int i,x,path[10],j,k;
printf("\nSource vertex=%d",src);
printf("\n\nDest vertex \tDistance\tPath\n");
for(i=0;i<n;i++)
{
printf("\n%d\t\t%d\t\t",i,graph->nd[i].dis);
x=i;
j=0;
path[0]=x;
while(x!=src)
{
path[++j]=graph->nd[x].pred;
x=graph->nd[x].pred;
}//storing path and coming back to src
for(k=j;k>=0;k--)
printf("%d->",path[k]);
}//for all nodes path loop of i
}

void bellford(struct Graph *graph,int src)
{
int V=graph->V;
int E=graph->E;
int i,j,n,flag=0;

for(i=0;i<V;i++)
{
graph->nd[i].dis=inf;
}
graph->nd[src].dis=0;
for(i=0;i<V-1;i++)
{
for(j=0;j<E;j++)
{
int u=graph->edg[j].src;
int v=graph->edg[j].dest;
int wt=graph->edg[j].wt;
if(graph->nd[u].dis+wt<graph->nd[v].dis)
{
 graph->nd[v].dis=wt+graph->nd[u].dis;
 graph->nd[v].pred=u;
}
}
}

for(i=0;i<E;i++)
{

int u=graph->edg[i].src;
int v=graph->edg[i].dest;
int wt=graph->edg[i].wt;
if((graph->nd[u].dis+wt)<graph->nd[v].dis)
 {
  flag=1;
 }
}
if(flag!=1)
print(graph,V,src);
else
printf("\n-ve cycle");
}

int main()
{
int i,V,E,src;
struct Graph *graph;

printf("\nEnter number of vertices and edges\n");
scanf("%d%d",&V,&E);
graph=create(V,E);
printf("\nEnter %d edges in the form (src, dest,wt)\n",E);
for(i=0;i<E;i++)
{
scanf("%d%d%d",&graph->edg[i].src,&graph->edg[i].dest,&graph->edg[i].wt);
}
printf("\nEnter source vertex:");
scanf("%d",&src);
bellford(graph,src);
return 0;
}

