#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int g,c;
    cin>>g>>c;

    int A = (c*c)/(2*g);
    cout<<A<<endl;
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
