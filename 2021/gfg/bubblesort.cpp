#include <bits/stdc++.h>
using namespace std;

vector<int> bubblesort(vector<int> array)
{
    for(int i=0;i<array.size()-1;i++)
    {
        for(int j=0;j<array.size()-1-i;j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp; 
            }
        }
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
    array = bubblesort(array);  

    printarray(array);
    return 0;
}
