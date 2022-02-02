#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int d,x,y,z;
    cin>>d;
    cin>>x;
    cin>>y;
    cin>>z;

    int A = 7*x;
    int B = d*y + (7-d)*z;

    cout<<max(A,B)<<endl;
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
