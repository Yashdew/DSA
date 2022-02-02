#include <bits/stdc++.h>
#define MAX 1000000001
using namespace std;
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int testCases=0;
    long long int n= MAX;
    vector<long long int> dp(n,0);
    dp[0]=0;
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    long long int lower = 2;
    
    for(long long int i=4;i<=(n-1);i++)
    {
        if( (i/lower)==2)
        {
            dp[i]=i-1;
            lower=i;
        }
        else
            dp[i]=dp[i-1];
    }
    
    
    cin >> testCases;
    while (testCases--)
    {
        long long int num;
        cin>>num;
        cout<<dp[num]<<endl;
    }
    
    return 0;
}
