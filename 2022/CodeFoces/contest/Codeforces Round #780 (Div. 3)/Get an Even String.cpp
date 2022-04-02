#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10; 
int n, dp[N], pr[N]; 
void solve()
{
    string str;
    cin >> str; 
    n = str.length(); str = " " + str; 
    set <long long> st[30]; 
    for (int i = 1; i <= n; ++ i) { 
        st[str[i] - 'a'].insert(i); 
        dp[i] = pr[i] = 0; 
    } 
    for (int i = 1; i <= n; ++ i) { 
        pr[i] = max(pr[i - 1], dp[i]); 
        auto it = st[str[i] - 'a'].upper_bound(i); 
        if (it == st[str[i] - 'a'].end()) continue; 
        int j = *it; 
        dp[j] = max(dp[j], pr[i - 1] + 1); 
    } 
    int ans = 0; 
    for (int i = 1; i <= n; ++ i) ans = max(ans, dp[i]); 
    cout << n - (ans * 2) << "\n"; 
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
