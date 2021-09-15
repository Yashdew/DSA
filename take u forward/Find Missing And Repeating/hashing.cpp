#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int num;
        cin>>num;

        vector<long long int> array;

        for(long long int i=0;i<num;i++)
        {
            long long int temp;
            cin>>temp;
            array.push_back(temp);
        }

        int hash[array.size()]={0};

        for(long long int i=0;i<array.size();i++)
        {
            hash[array[i]]++;
        }
        //vector<int>::iterator extra,missing;
        long long int extra,missing;
        extra = max_element(hash+1,hash+array.size()-1) - hash;
        missing = min_element(hash+1,hash+array.size()-1) - hash;

        cout<<extra<<" "<<missing<<endl;
    }

    return 0;
}
