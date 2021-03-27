#include <bits/stdc++.h>
using namespace std;

void swap(int array[],int i,int j)
{
    // cout<<"swap "<<l<<r<<"\n";
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}
int part(int array[],int l,int r)
{
    // cout<<"part"<<l<<r<<"\n";
    int pivot = array[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(array[j] < pivot)
        {
            i++;
            swap(array,i,j);
        }
    }
    swap(array,i+1,r);
    return i+1;
}

void print(int array[],int num)
{
    for(int i=0;i<num;i++)
    {
        cout<<array[i]<<endl;
    }
}
    
void quicksort(int array[],int l,int r)
{
    if(l<r)
    {
        int pivot = part(array, l, r);

        quicksort(array,l,pivot-1);
        
        quicksort(array,pivot+1,r);
    }
}


int main()
{  
    
    int array[7]= {10,9,8,6,2,1,9};
    int num=10;
    //cin>>num;
    //print(array,7);
    quicksort(array,0,6);
    print(array,7);
    
    return 0;
}