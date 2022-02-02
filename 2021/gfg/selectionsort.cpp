#include <bits/stdc++.h>
using namespace std;
vector<int> selectionsort(vector<int> array)
{
    for(int i=0;i<array.size()-1;i++)
    {
        int min=i;
        for(int j=i+1;j<array.size();j++)
        {
            if(array[j]<array[min])
            {
                min=j;
            }
        }
        int temp = array[min];
        array[min]=array[i];
        array[i]=temp;
    }
    return array;
}

void printarray()
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

    array = selectionsort(array);
    printarray();
   
    return 0;
}
