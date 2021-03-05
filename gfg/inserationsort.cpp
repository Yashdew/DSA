#include <bits/stdc++.h>
using namespace std;

vector<int> insertionsort(vector<int> array)
{

    int i,j,key=0;
    for(int i=1;i<array.size();i++)
    {
        key=array[i];
        j=i-1;
        while(j>=0 && array[j]>key)
        {
            array[j+1]=array[j];
            j=j-1;
        }
        array[j+1]=key;
    }
    return array;
}

void printarray(vector<int> array )
{
    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<" ";
    }
}

int main()
{  
    vector<int> array;

    int num;
    cin>>num;
    
    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }
    array = insertionsort(array);

    printarray(array);
    return 0;
}
