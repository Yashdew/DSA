#include <stdio.h>
#include<stdlib.h>
struct stack {
    int size;
    int top;
    int *S;
};

void create(struct stack *st)
{
    printf("\n enter the Size");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int*)malloc(st->size*sizeof(int));
}
void display(struct stack st)
{
    int i;
    for(i=st.top;i>=0;i--)
    {
        printf("%d",st.S[i]);
        printf("->");
    }
    
}
void push(struct stack *st,int x)
{
    if(st->top==st->size-1)
    {
        printf("overflow");
    }
    else
    {
        st->top++;
        st->S[st->top]=x;
    }
    
}
int pop(struct stack *st)
{
    int x=-1;
    if(st->top==-1)
    {
        printf("stack is underflow");
    }
    else
    {
        x=st->S[st->top--];

    }
    return x;
    
}
int peek(struct stack st,int index)
{
      int x=-1;
      if(st.top-index+1<0)
      {
          printf("Invalid Index");
      }
      else
      {
          x= st.S[st.top-index+1];
      }
      return x;
      
}
int isEmpty(struct stack st)
{
    if(st.top==-1)
        return 1;
    return 0;
}
int isFull(struct stack st)
{
    return st.top=st.size-1;
    

}
int stackTop(struct stack st)
{
    if(!isEmpty(st))
        return st.S[st.top];
    return -1;

}

int main() {
    int ch,ele,x,index,elo;
    struct stack st;
    while(1)
    {
        printf("\n enter 1 for Crating Stack");
        printf("\n 2 push an element");
        printf("\n 3 pop an element");
        printf("\n 4 display the stack");
        printf("\n 5 Peek  the stack");
        printf("\n enter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            create(&st);
            break;
            case 2:
            printf("\n enter the value you want to push");
            scanf("%d",&ele);
            push(&st,ele);
            break;
            case 3:
            x=pop(&st);
            printf("\n The value you have pop is %d",x);
            break;
            case 4:
            display(st);
            break;
            case 5:
            printf("\n Enter the Index of PEEK");
            scanf("%d",&index);
            elo=peek(st,index);
            printf("\n The value you have PEEk is %d",elo);
            break;
            
            default:
            break;
            


        }
    }
  
}