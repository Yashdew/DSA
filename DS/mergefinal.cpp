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
void merge(int array[],int l, int mid, int r)
{
    int n1 = mid-l+1;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i] = array[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i] = array[mid+1+i];
    }

    int i=0,j=0,k=l;
    while(i<n1 && j<n2)
    {
        if(a[i]<=b[j])
        {
            array[k] = a[i];
            i++;
        }
        else
        {
            array[k] = b[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        array[k] = a[i];
            i++;
            k++;
    }
    while(j<n2)
    {
        array[k] = b[j];
        j++;
        k++;
    }
    printarray(array,k);
}
void mergesort(int array[],int l,int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergesort(array,l,mid);
        mergesort(array,mid+1,r);
        
        merge(array,l,mid,r);

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

    mergesort(array,0,nums-1);
    printarray(array,nums);
    return 0;
}
