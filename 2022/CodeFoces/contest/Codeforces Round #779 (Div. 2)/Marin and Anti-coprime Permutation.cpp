#include <bits/stdc++.h>
using namespace std;
long long facts(long long n) {
    long long mod = 998244353;
    long long ans = 1; 
    for(long long i = 2; i <=n ; ++i) { 
        ans= (ans%mod *i%mod)%mod; 
    } 
    return ans; 
} 

void solve()
{
    long long mod = 998244353;
    long long num;
    cin>>num;

    if(num%2!=0)
        cout<<0<<endl;
    else{
        num/=2;
        long long ans = facts(num);
        cout<<(ans%mod *ans%mod)%mod<<endl;
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
