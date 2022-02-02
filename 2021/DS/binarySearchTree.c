#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *left;
    int data;
    struct node *right;
};
struct node *root=NULL;
int height(struct node *root1);
struct node *create(struct node *root)
{
    struct node *temp,*p=root;
    int x;
    
        printf("\n Enter the data you want to create");
        scanf("%d",&x);
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->left=temp->right=NULL;
        root=temp;
        return root;
        
        /*printf("Enter the data you want to insert");
        scanf("%d",&x);
        temp=(struct node*)malloc(sizeof(struct node)); 
        temp->data=x;
        temp->left=temp->right=NULL;
        if()*/
    
    
}
struct node *seacrh(struct node *root,int sea)
{
    struct node *temp=root,*p,*q;
    int flag=0;
    while(temp!=NULL)
    {
        if(temp->data==sea)
        {
            flag=1;
            printf("/n Element found");
            return temp;
        }
        else if(temp->data > sea)
        {
            temp=temp->left;
        }
        else if(temp->data < sea)
        {
            temp=temp->right;
        }
    }
    if(flag==0)
    {
        printf("/n Element found");
        return NULL;
    }
        
}
void insert(struct node *root,int ins)
{
    struct node *temp=root,*p,*q;
    int flag=1;
    if(root!=NULL)
    {
        while(temp!=NULL)
        {
            p=temp;
            if(temp->data==ins)
            {
                flag=0;
                printf("/n You can't insert because it's already present");
                return;
            }
            else if(temp->data > ins)
            {
                temp=temp->left;
            }
            else if(temp->data < ins)
            {
                temp=temp->right;
            }

        }
        if(flag==1)
        {
            if(p->left==NULL || p->right==NULL)
            {
                if(p->data>ins)
                {
                    q=(struct node*)malloc(sizeof(struct node));
                    q->data=ins;
                    q->left=q->right=NULL;
                    p->left=q;
                }
                else if(p->data<ins)
                {
                    q=(struct node*)malloc(sizeof(struct node));
                    q->data=ins;
                    q->left=q->right=NULL;
                    p->right=q;
                }
            }
        }
    }
    else if(root==NULL){
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=ins;
        temp->left=temp->right=NULL;
        root=temp;
        
        
    }

}
struct node *Rinsert(struct node *root,int ins)
{
    struct node *temp=root,*p;
    if(temp==NULL)
    {
        p=(struct node*)malloc(sizeof(struct node));
        p->data=ins;
        p->left=p->right=NULL;
        return p;
    }

    if(ins<temp->data)
        Rinsert(temp->left,ins);
    else if(ins>temp->data)
        Rinsert(temp->right,ins);
    
    return temp;
}
void display(struct node *root)
{
    struct node *p=root;

    if(p!=NULL)
    {
        display(p->left);
        printf("%d->",p->data);
        display(p->right);
    }
}
struct node *inorderPRE(struct node *root)
{
    struct node *temp=root;
    
    while(temp!=NULL && temp->right!=NULL)
    {
        temp=temp->right;
    }
    return temp;
}
struct node *inorderSUCC(struct node *root)
{
    struct node *temp=root;
    
    while(temp!=NULL && temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp;
}
struct node *Delete(struct node *root, int del)
{
    struct node *p=root,*q;
    if(p==NULL)
        return NULL;
    if(p->left==NULL && p->right==NULL)
    {
        if(p==root)
            root=NULL;
        free(p);
        return NULL;
    }   
    if(del < p->data)
        p->left=Delete(p->left,del);
    else if(del > p->data)
        p->right=Delete(p->right,del);
    else
    {
        if( height(p->left) > height(p->right))
        {
            q=inorderPRE(p->left);
            p->data=q->data;
            p->left=Delete(p->left,q->data);
        }
        else
        {
            q=inorderSUCC(p->right);
            p->data=q->data;
            p->right=Delete(p->right,q->data);
        }
        
            

    }
    
    


}
int height(struct node *root)
{
    int x=0,y=0;
    if(root==NULL) 
        return 0;
    x=height(root->left);
    y=height(root->right);
    if(x>y)
        return x+1;
    else
        return y+1;
}
int main()
{
    root=create(root);
    display(root);
    struct node *temp=Rinsert(root,5);
    Rinsert(root,15);
    Rinsert(root,8);
    Rinsert(root,13);
    Rinsert(root,16);
    
    insert(root,5);
    insert(root,15);
    insert(root,2);
    insert(root,8);
    insert(root,13);
    insert(root,16);
    display(root);
    printf("/n");
    Delete(root,10);
    int a[100],i;
    int n;
    printf("enter the value of n\t");
    scanf(" %d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter the value of %d array \t",i);
        scanf(" %d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        insert(root,a[i]);
    }
    display(root);
}