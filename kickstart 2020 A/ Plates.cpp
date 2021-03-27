#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int N,K,P;

        cin>>N>>K>>P;

        vector<vector<long long int>> stack;
        vector<long long int> single;
        for(long long int i=0;i<N;i++)
        {
            for(long long int j=0;j<K;j++)
            {
                long long int temp;
                cin>>temp;
                single.push_back(temp);
            }
            stack.push_back(single);
            single.clear();
        }

        
        
    }

    return 0;
}
