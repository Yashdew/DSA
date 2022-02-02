#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int Days, dist, A, B, C;
    cin>>Days>>dist>>A>>B>>C;
    long long int totalDist = Days * dist;
    //cout<<totalDist<<endl;
    if(totalDist >= 41)
        cout<<C<<endl;
    else if(totalDist<41 &&  totalDist >= 21)
        cout<<B<<endl;
    else if(totalDist >= 10 && totalDist <21 )
        cout<<A<<endl;
    else 
        cout<<0<<endl;
}
int main()
{  
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        solve();
    }

    return 0;
}
