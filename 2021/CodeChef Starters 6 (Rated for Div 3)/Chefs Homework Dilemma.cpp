#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> array(n,0);

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    if(n==k)
        cout<<0<<endl;
    else
    {
        vector<int> dp(n);
        deque<pair<int,int>> dq;
        for(int i=0;i<=k;i++)
        {
            dp[i] = array[i];
            while(!dq.empty() and dq.back().first > dp[i])
                dq.pop_back();
            dq.push_back({dp[i],i});
        }

        for(int i=k+1;i<n;i++)
        {
            if(!dq.empty() && dq.front().second < i-k-1)
                dq.pop_front();
            int temp = dq.front().first;
            dp[i] = array[i] + temp;

            while(!dq.empty() && dq.front().first > dp[i])
                dq.pop_back();
            dq.push_back({dp[i],i});
        }

        int ans = INT_MAX;

        for(int i=n-k-1;i<n;i++)
        {
            ans = min(ans,dp[i]);
        }
        cout<<ans<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        solve();
    }

    return 0;
}
