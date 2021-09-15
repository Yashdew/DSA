#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int X,Y;
    cin>>X>>Y;

    if( X+Y<6)
    {
        float sum = float( float( 6-float(X)-float(Y) ) / float(6) );
        cout<<sum<<endl;
    }
    else
    {
        cout<<0<<endl;
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
