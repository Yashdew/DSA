#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *head=NULL;
struct node *create(struct node *head)
{
    struct node *temp=NULL,*p=NULL;
    int ch=1,x=0;
    
    while(ch==1)
    {   
        printf("Enter the value you want to insert");
        scanf("%d",&x);
        temp=(struct node*)malloc(sizeof(struct node));
        temp->prev=NULL;
        temp->data=x;
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp;
            p=temp;
            
        }
        else
        {
            p->next=temp;
            temp->prev=p;
            p=temp;
        }
        printf("Enter 1 to insert more");
        scanf("%d",&ch);
    }

    return head;
    
}
void display(struct   node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int length(struct node *head)
{
    struct node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

struct node *insertFirst(struct node *head, int x)
{
    struct node *temp=NULL;
    printf("Enter the value you want to insert");
    scanf("%d",&x);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=x;
    temp->next=NULL;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
    return head;
}
void insert(struct node *head, int x ,int pos)
{
    struct node *temp=NULL,*p;
    printf("Enter the value you want to insert");
    scanf("%d",&x);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=x;
    temp->next=NULL;
    p=head;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
            p=p->next;
        }
        temp->next=p->next;
        temp->prev=p;
        if(p->next!=NULL)
        {
            p->next->prev=temp;
        }
        p->next=temp;
    }
    
}
struct node *insertLast(struct node *head,int x)
{
    struct node *temp=NULL,*p;
    printf("Enter the value you want to insert");
    scanf("%d",&x);
    temp=(struct node*)malloc(sizeof(struct node));
    temp->prev=NULL;
    temp->data=x;
    temp->next=NULL;
    p=head;
    if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
        while(p!=NULL)
        {
            p=p->next;
        }
        temp->next=p->next;
        temp->prev=p;
        p->next=temp;
    }
    return head;
}
void search(struct node *head,int x)
{
    struct node *temp=head;
    int count=0,flag=0;
    if(head==NULL)
    {
        printf("the list is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            
            if(temp->data==x)
            {
                printf("Element is found");
                flag=1;
            }
            temp=temp->next;
        }
        if(flag==0)
        {
            printf("Element not found");
        }
    }
    
}
struct node *DeleteFirst(struct node *head)
{
    struct node *temp=head;
    int x; 
    int flag=0;
    if(head==NULL)
    {
        printf("Cann't delete any element");
        
    }
    else
    {
        
        head=head->next;
        x=temp->data;
        free(temp);
        if(head!=NULL)
        {
            head->prev=NULL;
        }
    }
    return head;
}
struct node *Delete(struct node *head,int x)
{
    struct node *temp=head;
    int del;
    if(head==NULL)
    {
        printf("List is Empty");
    }
    else
    {
        while(temp->data!=x)
        {
            temp=temp->next;
        }
        temp->prev->next=temp->next;
        if(temp->next!=NULL)
        {
            temp->next->prev=temp->prev;
        }
        del=temp->data;
        free(temp);
    }
    return head;
}
struct node *Reverse(struct node *head)
{
    struct node *p=head,*temp=NULL;
    while(p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL && p->next==NULL)
        {
            head=p;
        }
    }
    return head;
}
int main()
{
    head=NULL;
    int count=0,ch=0;
    int  x=0,pos,sea,del,flag;
    struct node *p;
   
    
    while(1)
    {
        printf("\n 1 for Crating");
        printf("\n 2 Display");
        printf("\n 3 Display Recursive");
        printf("\n 4 Display");
        printf("\n 5 Display Rescurvise");
        printf("\n 6 MAX");
        printf("\n 7 Search");
        printf("\n 8 Insert First");
        printf("\n 9 Insert anywhere");
        printf("\n 10 Insert last");
        printf("\n 11 Delete First");
        printf("\n 12 Delete anywhere");
        printf("\n 13 To reverse Elemen t");
        printf("\n enter your choice");

        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            head=create(head);
            break;
            case 2:
            display(head);
            break;
            case 3:
            
            break;

            case 4:
            
            break;

            case 5:
            
            break;

            case 6:
            
            break;

            case 7:
            printf("\n Enter the position");
            scanf("%d",&sea);
            search(head,sea);
            break;

            case 8:

            head=insertFirst(head,x);
            
            break;

            case 9:
            printf("\n Enter the position");
            scanf("%d",&pos);
            insert(head,x,pos);
            break;
            case 10:
            head=insertLast(head,x);
            break;

            case 11:
            
            head=DeleteFirst(head);
            break;
            case 12:
            printf("\n Enter the position");
            scanf("%d",&del);
            Delete(head,del);
            break;
            case 13:
            p=Reverse(head);
            display(p);
            break;
            default:
            break;
            


        }
    }

    /*display(head);
    count=length(head);
    printf("%d",count);*/
   

}