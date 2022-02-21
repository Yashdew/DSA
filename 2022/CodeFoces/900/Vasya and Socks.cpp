#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int  pairSocks, buythDay;
    cin>>pairSocks>> buythDay;

    int count = 0;
    for(int i=1;i<=pairSocks;i++)
    {
        if( i%buythDay == 0)
            pairSocks++;
        
        count++;
    }

    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
