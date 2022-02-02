#include <bits/stdc++.h>
using namespace std;
bool check(vector<long long int> array,vector<long long int> copyarray)
{
    for(long long int i=0;i<array.size();i++)
    {
        if(array[i]!=copyarray[i])
            return false;
    }
    return true;
}
long long int sorting(vector<long long int> array,vector<long long int> copyarray)
{
    int count=0;
    if(!check(array,copyarray))
    {
        for(long long int i=0;i<array.size()-1;i++)
        {
            long long int  mini=i;
            for(long long int j=i+1;j<array.size();j++)
            {
                if(array[j] < array[mini] )
                {
                    mini = j;
                }
            }
            long long int temp = array[mini];
            array[mini] = array[i];
            array[i] = temp;
            count=count+i+1;

            if(check(array,copyarray))
                break;
        }
        return count;
    }
    return 1;
}
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int nums;
        cin>>nums;
        vector<long long int> array;
        for(long long int i=0;i<nums;i++)
        {
            long long int temp=0;
            cin>>temp;
            array.push_back(temp);
        }
        vector<long long int> copyarray=array;
        sort(copyarray.begin(),copyarray.end());

        long long int value = sorting(array,copyarray);
        cout<<value;
    }

    return 0;
}
