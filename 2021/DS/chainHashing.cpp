#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

void insertSorted(struct node **h,int x)
{
    struct node *t,*q=NULL,*p=*h;
    t = new node();
    t->data=x;
    t->next=NULL;

    if(*h==NULL)
    {
        *h=t;
    }
    else
    {
        while(p && p->data<x)
        {
            q=p;
            p=p->next;
        }
        if(p==*h)
        {
            t->next=*h;
            *h=t;
        }
        else
        {
            t->next=q->next;
            q->next=t;
        }
        
    }
    
}

struct node *search(struct node *p, int key)
{
    while(p!=NULL)
    {
        if(key==p->data)
        {
            return p;
        }
        p=p->next;
    }
    return NULL;
}

int hashing(int key)
{
    return key%10;
}
void insert(struct node *H[],int x)
{
    int index = hashing(x);
    insertSorted(&H[index],x);

}

// void display(struct node *H[])
// {
//     for(int i=0;i<10;i++)
//     {
//         cout<<i<<"-->";
//         struct node *p=H[hashing[i]];
//         while(p->next==NULL)
//         {
//             cout<<p->data<<"\t";
//             p=p->next;
//         }
//         cout<<endl;
//     }
// }
int main()
{
    struct node *HT[10];
    struct node *temp;
    int i,x;
    for(i=0;i<10;i++)
        HT[i]=NULL;

    
    insert(HT,12);
    
    insert(HT,22);
    
    insert(HT,23);
    
    insert(HT,48);
    
    insert(HT,32);
    
    insert(HT,69);

    // display(HT);

    int key=32;
    temp=search(HT[hashing(key)],key);
    cout<<temp->data;
    return 0;
}