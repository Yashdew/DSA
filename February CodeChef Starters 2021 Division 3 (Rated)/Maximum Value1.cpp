#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int nums;
        cin>>nums;
        vector<long long int> array;
        for(long long int i=0;i<nums;i++)
        {
            long long int temp;
            cin>>temp;
            array.push_back(temp);
        }
        sort(array.begin(),array.end());

        int maxi = pow(array[array.size()-1],2);
        
        int mini = pow(array[0],3);
        if(maxi>mini)
        cout<<maxi-mini<<endl;
        else if(maxi<mini)
        cout<<mani-maxi<<endl;
        else
        cout<<0<<endl;
        
    }

    return 0;
}
