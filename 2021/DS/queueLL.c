#include<stdio.h>
#include<stdlib.h>
struct node{
    
    int data;
    struct node *next;
}*front=NULL,*rear=NULL;


void enqueue(int x)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Queue is Full");
    }
    else
    {
        temp->data=x;
        temp->next=NULL;
        if(front==NULL)
            front=rear=temp;
        else
        {
            rear->next=temp;
            rear=temp;
        }
    }
}
void Display()
{
    struct node *temp=front;
    while(temp)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int dequeue()
{
    struct node *temp=front;
    int x;
    if(rear==NULL && front==NULL)
    {
        printf("bye");
        return -7879;
    }
    else
    {
        if(front==rear)
        {
            x=front->data;
            free(front);
            free(rear);
        }
        else
        {
            x=temp->data;
            temp=temp->next;
            free(front);
            front=temp;

        }
        return x;
    }
}
int main()
{
    int del;
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    Display();
    del=dequeue();
    
    printf("%d",del);
    printf("\n");
    Display();
}