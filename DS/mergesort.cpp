#include <bits/stdc++.h>
using namespace std;


void printarray(vector<int> array )
{
    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<" ";
    }
}
vector <int> merge(vector<int> array,int begin,int mid,int end)
{
    int lowerlimit = mid-begin+1;
    int upperlimit = end-mid;

    int arraylower[lowerlimit];
    int arrayupper[upperlimit];

    for(int i=0;i<lowerlimit;i++)
    {
        arraylower[i]=array[begin+i];

    }
    for(int i=0;i<upperlimit;i++)
    {
        arrayupper[i]=array[mid+1+i];
    }
    
   

    int i=0,j=0,k=begin;
    while( i<lowerlimit && j<upperlimit )
    {
        if(arraylower[i]<=arrayupper[j])
        {
            array[k]=arraylower[i];
            k++;
            i++;
        }
        else
        {
            array[k]=arrayupper[j];
            k++;
            j++;
        }
    }

    while(i<lowerlimit)
    {
        array[k]=arraylower[i];
        k++;
        i++;
    }
    while(j<upperlimit)
    {
        array[k]=arrayupper[j];
        k++;
        j++;
    }

    return array;
}
vector<int> mergesort(vector<int> array,int begin,int end)
{
    if(begin<=end)
    {
        int mid = (begin+end)/2;

        mergesort(array,begin,mid);
        mergesort(array,mid+1,end);

        array = merge(array,begin,mid,end);
    }
    return array;
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
    
    vector<int> array1 = mergesort(array,0,array.size()-1);
    printarray(array1);
    return 0;
}
