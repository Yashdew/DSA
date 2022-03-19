#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x,y,num;
    cin>>x>>y>>num;

    long long Rem = num/x;
    long long ans = x * Rem + y;
    
    if(ans > num){
        ans-=x;
    }
    cout<<ans<<endl;
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
