#include<stdio.h>
#include<stdlib.h>
 
struct node {
    int data;
    struct node *next;
};

 /**********************Creating************************/  
struct node *create(struct node *head)
{
    struct node *temp,*p;
    int ch=1,ele;
            //temp=new node;
    while( ch==1)
    {
        temp=(struct node*)malloc(sizeof(struct node));
        printf("\n Enter the value you want to create");
        scanf("%d",&ele);
        if(head==NULL)
        {
            temp->data=ele;
            temp->next=NULL;
            head=temp;
            p=temp;
        }
        else 
        {
            temp->data=ele;
            temp->next=NULL;
            p->next=temp;
            p=temp;
        }
        printf("\n Press 1 to enter more no.");
        scanf("%d",&ch);
    }
                
            
    return head;   
}
               
/**********************INsert************************/
void insert(struct node *head,int ele)
{
    struct node *temp,*p;
    temp=(struct node*)malloc(sizeof(struct node)); 

}
/**********************Display************************/
void display(struct node *head)
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("there is no data in Linked list");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            printf("->");
            temp=temp->next;
        }
    }
}
/**********************Max of node************************/
void maxnode1(struct node *head)
{
    int max=0;
    struct node *temp=head;
    if(head==NULL)
    {
        printf("there is no data in Linked list");
    }
    else
    {
        while(temp)
        {
            if(temp->data>max)
            {
                max=temp->data;
            }
            temp=temp->next;
        }
        printf("\n the maximum element is %d",max);
    }
    
}
/**********************Search Node************************/
void search(struct node *head,int sea)
{
    int flag=0;
    struct node *temp=head;
    if(head==NULL)
    {
        printf("there is no data in Linked list");
    }
    else
    {
        while(temp!=NULL)
        {
            if(sea==temp->data)
            {
                flag=1;
                sea=temp->data;
            }
            else if(sea!=temp->data)
            {
                flag==0;
            }
            temp=temp->next;
        }
    }
    if(flag==1)
    {
        printf("you have seached the element is %d",sea);
    }
    else if(flag==0)
    {
        printf("you have seached the element not found");
    }
    
}
/**********************Display Recursiuon************************/
void displayR(struct node *head)
{
    struct node *p=head;
    if(p!=NULL)
    {
        printf("%d",p->data);
        printf("->");
        displayR(p->next);
    }
}
/**********************Count************************/
void Count(struct node *head)
{
    int count=0;
    struct node *temp=head;
    if(head==NULL)
    {
        printf("there is no data in Linked list");
    }
    else
    {
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        printf("total no of Nodes are %d",count);
    }
}

/**********************SUM OF ALL************************/
void sumofall(struct node *head)
{
    int sum=0;
    struct node *temp=head;
    if(head==NULL)
    {
        printf("there is no data in Linked list");
    }
    else
    {
        while(temp!=NULL)
        {
            sum=sum+temp->data;
            temp=temp->next;
        }
        printf("total no of Nodes are %d",sum);
    }
}

struct node *insertFirst(struct node *head,int newEle)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=newEle;
    temp->next=head;
    head=temp;
    return(head);
}
void middleinsert(struct node *head,int position)
{
    struct node *temp=NULL,*p=head;
    int newEle,i;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the value you want to insert first");
    scanf("%d",&newEle);
    temp->data=newEle;
    for(i=0;i<position-1 && p;i++)
    {
        p=p->next;
    }
    if(p)
    {
        temp->next=p->next;
        p->next=temp;
    }
}
void lastinsert(struct node *head)
{
    struct node *temp=NULL,*p=head;
    int newEle;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("\n Enter the value you want to insert first");
    scanf("%d",&newEle);
    temp->data=newEle;
    temp->next=NULL;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;

}
struct node *deleteF(struct node *head)
{
    struct node *p=head;
    head=head->next;
    free(p);
    return(head);

}
struct node *deleteany(struct node *head,int pos)
{
    struct node *p=head,*q=NULL;
    int i=0;
    while(i<pos-1)
    {
        q=p;
        p=p->next;
        i++;
    }
    q->next=p->next;
    free(p);
    return(head);

}
void reverse(struct node *head)
{
    struct node *p=head;
    if(p!=NULL)
    {
        reverse(p->next);
        printf("%d",p->data);
        printf("->");
    }
}
int main() {
    int ch,ele,sea,newEle,position,posd=0;
    struct node *head=NULL;
    while(1)
    {
        printf("\n 1 for Crating");
        printf("\n 2 Count");
        printf("\n 3 Sum of All");
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
            Count(head);
            break;

            case 3:
            sumofall(head);
            break;

            case 4:
            display(head);
            break;

            case 5:
            displayR(head);
            break;

            case 6:
            maxnode1(head);
            break;

            case 7:
            printf("\n Enter the value you want to Search");
            scanf("%d",&sea);
            search(head,sea);
            break;

            case 8:
            if(head!=NULL)
            {
                 printf("\n Enter the value you want to insert first");
                 scanf("%d",&newEle);
                 head=insertFirst(head,newEle);
                 display(head);    
            }
            else
            {
                 printf("\n Head is Empty");
            }
            
            break;

            case 9:
            if(head!=NULL)
            {
                printf("\n Enter the Position you want to insert");
                scanf("%d",&position);
                if(position==0)
                {
                    printf("\n Enter the value you want to insert first");
                    scanf("%d",&newEle);
                    head=insertFirst(head,newEle);
                    display(head);
                }
                else
                {
                    middleinsert(head,position);
                }
            }
            else
            {
                printf("\n Head is Empty");
            }
            
            
            
            break;
            case 10:
            lastinsert(head);
            display(head); 
            break;

            case 11:
            if(head!=NULL)
            {
                head=deleteF(head);
            }
            else
            {
                printf("\n Head is Empty");
            }
            display(head); 
            case 12:
            printf("\n Enter the pos you want to delete");
            scanf("%d",&posd);
            head=deleteany(head,posd);
            display(head);
            break;
            case 13:
            reverse(head);
            
            break;
            default:
            break;
            


        }
    }
  
}