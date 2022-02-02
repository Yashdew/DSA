#include<stdio.h>

int main() {

    int t,n=0,sum=1;
    scanf("%d",&t);
    if(t>=1 && t<=100)
    {
        for(int i=0;i<t;i++)
        {
		    scanf("%d",&n);
            sum=1;
            for(int j=n;j>=1;j--)
            {
                sum=sum*j;    
            }
            printf("%d \n",sum);
        }
    }
	return 0;
}