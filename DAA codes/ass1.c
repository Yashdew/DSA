//Write a program to solve the travelling salesman problem and to print the path and the cost using Branch and Bound.
#include<stdio.h>
#include<stdlib.h>

int max,min;
int a[100];

void MaxMin(int i,int j) //MAX MIN FUNCTION
{
	int max1,min1,mid;

			if(i==j)
				max=min=a[i];

			else if(i==j-1)
				{
					if(a[i]<a[j])
						{
							max=a[j];
							min=a[i];
						}
					else
						{
							max=a[i];
							min=a[j];
						}
				}

			else
				{
					mid=(i+j)/2;
					MaxMin(i,mid);
					max1=max;
					min1=min;

					MaxMin(mid+1,j);

					if(max<max1)
						max=max1;

					if(min>min1)
						min=min1;
				}
}

int main()
{
	int i,num;

	printf("\nEnter no of elements in array : ");
	scanf("%d",&num);

	printf("\nEnter the element of array :\n");
	for(i=0;i<num;i++)
	{
        printf("Element a[%d]: ",i);
		scanf("%d",&a[i]);
	}

	max=a[0];
	min=a[0];
	MaxMin(1,num);//max min function call
	printf("\nMaximum is :%d ",max);  //maximum element is printed
	printf("\nMinimum is :%d \n",min);//minimum element is printed
	printf("Array is :");
	for(i=0;i<num;i++)//Enter no of elements in array6
	{
		printf("\t%d",a[i]);
	}
return 0;
}