#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int yearNum;
    cin>>yearNum;

    int mod = yearNum % 2020;
    int div = yearNum / 2020;

    if(mod <= div)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
