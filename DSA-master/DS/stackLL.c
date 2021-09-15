#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*top;
void create()
{
    struct node *temp;
    int x,ch=1;
    
        printf("/n Enter the Data you want to insert");
        scanf("%d",&x);
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=NULL;
        if(top==NULL)
        {   
            top=temp;
        }
  
   
}
void push(int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    
    if(top==NULL)
    {
        printf("Stack overflow");
    }    
    else
    {
        temp->data=x;
        temp->next=top;
        top=temp;
    }
    
}
int pop()
{
    int x=-1;
    struct node *p;
    if(top==NULL)
    {
        printf(" /n List is empty");
    }
    else
    {
        
        p=top;
        x=p->data;
        top=top->next;
        free(p);
    }
    return x;
}

void display()
{
    int x=-1;
    struct node *p=top;
    if(top==NULL)
    {
        printf("/n List is empty");
    }
    else
    {
        while(p!=NULL)
        {
            printf("%d->",p->data);
            p=p->next;
        }
    }
}
 
int main()
{
    create();
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    display();
    int bhai=pop();
    display();
}