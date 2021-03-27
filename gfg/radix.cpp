#include <bits/stdc++.h>
using namespace std;
void radixsort(int array[],int num)
{
        
}
void print(int array[],int num)
{
    for(int i=0;i<num;i++)
    {
        cout<<array[i]<<" ";
    }
}
int main()
{  
    int array[100];
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        cin>>array[i];
    }
    radixsort(array,num);
    print(array,num);
    return 0;
}
