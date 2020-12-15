#include<stdio.h>
#include<stdlib.h>
struct node {
    struct node *left;
    int data;
    struct node *right;
};
struct node *root=NULL;
struct node *create()
{
    struct node *temp=NULL;
    int x;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value of data (enter -999)");
    scanf("%d",&x);
    temp->data=x;
    temp->left=temp->right=NULL;
    if(x==-999)
    {
        return 0;
    }
    printf("Enter the left of %d",temp->data);
    temp->left=create();
    printf("Enter the right of %d",temp->data);
    temp->right=create();  
    return temp;  
}
void display(struct node *root1)
{
    struct node *temp=root1;

    if(temp!=NULL)
        {
            printf("%d->",temp->data);
            display(temp->left);
            display(temp->right);
        }
}

int search(struct node *root1,int sea)
{
    struct node *temp=root1;
    int flag=0;
    if(temp!=NULL)
    {
        if(temp->data==sea)
        {
            printf("Element found!");
            printf("%d",temp->data);
            flag=1;
        }
        else
        {
          search(temp->left,sea);
          search(temp->right,sea);  
        }
    }
    return flag;
}
int update(struct node *root1,int sea)
{
    struct node *temp=root1;
    int tempVar;
    int flag=0;
    if(temp!=NULL)
    {
        if(temp->data==sea)
        {
           printf("/n enter the new Variable");
           scanf("%d",&tempVar);
           temp->data=tempVar;
           printf("/n updated");
           flag=1;
        }
        else
        {
          update(temp->left,sea);
          update(temp->right,sea);  
        }
    }
    return flag;
    
}
void insert(struct node *root1,int sea)
{
    struct node *temp=root1;
    int flag=0;
    if(temp!=NULL)
    {

    }
}
void inorder(struct node *root1)
{
    struct node *temp=root1;
    if(temp!=NULL)
    {
        printf("%d",temp->data);
        inorder(temp->left);
        inorder(temp->right);
    }
}
void preorder(struct node *root1)
{
    struct node *temp=root1;
    if(temp!=NULL)
    {
        preorder(temp->left);
        printf("%d",temp->data);
        preorder(temp->right);
    }
}
void postorder(struct node *root1)
{
    struct node *temp=root1;
    if(temp!=NULL)
    {
        postorder(temp->left);
        postorder(temp->right);
        printf("%d",temp->data);
       
    }
}
int countnode(struct node *root1)
{
    int x,y;
    struct node *p=root1;
    if(p!=NULL)
    {
        x=countnode(p->left);
        y=countnode(p->right);
        if(p->left && p->right)
            return x+y+1;
        else
            return x+y;
    }
    return 0;
}
int totalcount(struct node *root1)
{
    int x,y;
    struct node *p=root1;
    if(p!=NULL)
    {
        x=totalcount(p->left);
        y=totalcount(p->right);
        return x+y+p->data;
    }
    return 0;
}
int height(struct node *root1)
{
    int x=0,y=0;
    if(root==0) 
        return 0;
    x=height(root1->left);
    y=height(root1->right);
    if(x>y)
        return x+1;
    else
        return y+1;
    
    
}
int main()
{
    int flag,sea,upd=30,flag1,count=0;
    root=create();
    printf("\n Normal display");
    display(root);
    printf("\n");

    printf("\n inorder");
    inorder(root);

    printf("\n preorder");
    preorder(root);

    printf("\n postorder");
    postorder(root);
    
    count=totalcount(root);
    printf("/n %d",count);
    
    sea=100;
    
    flag=search(root,sea);
    printf("\n %d",flag);
    printf("\n");

    flag1=update(root,upd);
    printf("\n %d",flag1);
    
    printf("\n");
    
    display(root);
}