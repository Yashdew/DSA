#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int nums;
        cin>>nums;

        vector<long long int>array;
        for(long long int i=0;i<nums;i++)
        {
            long long int temp;
            cin>>temp;
            array.push_back(temp);
        }
        sort(array.begin(),array.end());
        vector<long long int> minmax;
        for(int i=0;i<array.size()-1;i++)
        {
            minmax.push_back(array[i+1]-array[i]);
        }
        
        //sort(minmax.begin(),minmax.end());
        cout<< *max_element(minmax.begin(),minmax.end())<<endl;
        // vector<long long int> minmax;
        // for(long long int i=0;i<array.size()-1;i++)
        // {
        //     for(long long int j=i+1;j<array.size();j++)
        //     {
        //         long long int andVar = array[i] & array[j];
        //         long long int orVar  = array[i] | array[j];
        //         long long int xorVar = andVar ^ orVar;
        //         minmax.push_back(xorVar );  
        //     }
        // }
        // sort(minmax.begin(),minmax.end());
        // // for(long long int i=0;i<minmax.size();i++)
        // // {
        // //     cout<<minmax[i]<<" ";
        // // }
        // cout<<minmax[0]<<endl;
    }

    return 0;
}
