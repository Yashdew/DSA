#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long start,end,fixA;
    cin>>start>>end>>fixA;
    
    long long X = end%fixA;
    long long ans = end/fixA + X;
    end-=X+1;
    if(end >= start)
        ans = max(ans,end/fixA + end%fixA);
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
