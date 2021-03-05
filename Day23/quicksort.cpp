#include <bits/stdc++.h>
using namespace std;
void printarray(int array[], int num)
{
    for(int i=0;i<num;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"\n";
}
void swap(int array[],int X,int Y)
{
    int temp = array[X];
    array[X] = array[Y];
    array[Y] = temp;
}
int partition(int array[],int l, int r)
{
    int pivot = array[r];
    int i=l-1;
    
    for(int j=l;j<r;j++)
    {
        if(array[j]<pivot)
        {
            i++;
            swap(array,i,j);
        }
    }
    swap(array,i+1,r);
    return i+1;
}
void quicksort(int array[],int l, int r)
{
    if(l<r)
    {
        int pivot = partition(array,l,r);

        quicksort(array,l,pivot-1);
        quicksort(array,pivot+1,r);
    }
}
int main()
{  
    int nums;
    cin>>nums;
    int array[nums];
    for(int i=0;i<nums;i++)
    {
        cin>>array[i];
    }
    quicksort(array, 0, nums-1);
    printarray(array, nums);
    return 0;
}
