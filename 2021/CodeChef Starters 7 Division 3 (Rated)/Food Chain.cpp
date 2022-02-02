#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int E,K;
    cin>>E>>K;
    int count=0;
    while(E!=0)
    {
        count++;
        E=E/K;
    }
    cout<<count<<endl;
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
