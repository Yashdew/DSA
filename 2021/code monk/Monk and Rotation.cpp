#include <bits/stdc++.h>
using namespace std;

void print(vector<long long int> a)
{
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int num;
        long long int k;
        cin>>num>>k;

        vector<long long int> array;

        for(long long int i=0;i<num;i++)
        {
            long long int temp;
            cin>>temp;
            array.push_back(temp);
        }

        if(k==0 || k==num)
        {
            print(array);
        }
        else if(num>k)
        {
            vector<long long int> temp;
            for(long long int i=num-k;i<array.size();i++)
            {
                temp.push_back(array[i]);
            }   
            for(long long int i=0;i<num-k;i++)
            {
                temp.push_back(array[i]);
            }   
            print(temp);
        }
        else if(num<k)
        {
            int tempvar = k%num;
            vector<long long int> temp;
            for(long long int i=num-tempvar;i<array.size();i++)
            {
                temp.push_back(array[i]);
            }   
            for(long long int i=0;i<num-tempvar;i++)
            {
                temp.push_back(array[i]);
            }   
            print(temp);
        }
    }

    return 0;
}
