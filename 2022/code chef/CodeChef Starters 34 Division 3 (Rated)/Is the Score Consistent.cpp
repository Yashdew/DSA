#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long A,B,C,D;

    cin>>A>>B>>C>>D;

    if( A <= C && B <= D)
        cout<<"POSSIBLE"<<endl;
    else
        cout<<"IMPOSSIBLE"<<endl;
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
