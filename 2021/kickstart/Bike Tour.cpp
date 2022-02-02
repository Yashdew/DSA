#include <bits/stdc++.h>
using namespace std;
int solve(int i)
{
    long long int nums;
    cin>>nums;
    vector<long long int> array;

    for(long long int i=0;i<nums;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }

    int index=1;
    int count=0;
    while(index < nums-1)
    {
        if( array[index-1] < array[index] && array[index] > array[index+1] )
        {
            index=index+2;
            count++;
        }
        else
        {
            index++;
        }
    }
    cout<<"Case #"<<i<<": ";
    return count;
}
int main()
{  
    int testCases;
    cin >> testCases;
    int i=1;
    while (testCases--)
    {
        cout<<solve(i);
        cout<<endl;
        i++;
    }

    return 0;
}
