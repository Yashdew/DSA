#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,y;
    cin>>n>>x>>y;

    for(int i=2;i<n;i++)
    {
        if( i%x==0 && i%y!=0)
            cout<<i<<" ";
    }
    cout<<endl;
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
