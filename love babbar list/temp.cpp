#include <bits/stdc++.h>
using namespace std;

void swap(vector<int> array,int l,int r)
{
    int temp = array[l];
    array[l] = array[r];
    array[r] = temp;
}
int partation(vector<int> array,int l,int r)
{
    int pivot = array[r];
    int i=l-1;
    for(int j=l;j<r-1;j++)
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
        cout<<array[i];
    }
}
    
int main()
{  
    
    vector<int> array;
    int num=10;
    //cin>>num;
    array.push_back(10);
    array.push_back(9);
    array.push_back(8);
    array.push_back(7);
    array.push_back(6);
    array.push_back(5);
    array.push_back(4);
    array.push_back(3);
    array.push_back(2);
    array.push_back(1);
    array = quicksort(array,0,array.size());
    print(array);
    
    return 0;
}
