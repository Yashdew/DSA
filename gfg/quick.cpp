#include <iostream>
#include<vector>
using namespace std;

vector<int> swap(vector<int> array,int l,int r)
{
    // cout<<"swap "<<l<<r<<"\n";
    int temp = array[l];
    array[l] = array[r];
    array[r] = temp;

    return array;
}
int partation(vector<int> array,int l,int r)
{
    int pivot = array[r];
    int i=l-1;
    for(int j=l;j<r-1;j++)
    {
        if(array[j] > pivot)
        {
            i++;
           array = swap(array,i,j);
        }
    }
    array =  swap(array,i+1,r);
    return i+1;
}

vector<int> quicksort(vector<int> array,int l,int r)
{
    if(l<r)
    {
        int pivot = partation(array, l, r);

        quicksort(array,l,pivot-1);
        
        quicksort(array,pivot+1,r);
    }

    return array;
}

void print(vector<int> array)
{
    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<endl;
    }
}
    
int main()
{  
    
    vector<int> array= {10,9,8,6,2,1,9};
    int num=10;
    //cin>>num;
    
    array = quicksort(array,0,array.size());
    print(array);
    
    return 0;
}