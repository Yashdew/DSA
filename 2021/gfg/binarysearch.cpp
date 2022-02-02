#include <bits/stdc++.h>
using namespace std;

int bsearch(vector<int> array, int low, int high, int element)
{
    if(high>=low)
    {
        int mid = low + (high-low)/2;

        if(array[mid]==element)
        {
            return mid;
        }
        
        if(array[mid]>element)
        {
            return bsearch(array,low,mid-1,element);
        }
        
        return bsearch(array,low+1,high,element);
    }
    
    return -1;
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

    sort(array.begin(),array.end());

    int find=0;
    cout<<"\n Enter the element you want to search";
    cin>>find;
    int element = bsearch(array,0,num,find);

    if(element==-1)
    {
        cout<<"\n Element not found";
    }
    else
    {
        cout<<"\n Element found at "<<element<<" "<<array[element];
    }
    return 0;
}
