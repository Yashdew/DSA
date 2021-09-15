#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b;
    cin>>a>>b;

    if(a+b < 3)
        cout<<1<<endl;
    else if(a+b>= 3 && a+b<=10)
        cout<<2<<endl;
    else if(a+b>= 11 && a+b<=60)
        cout<<3<<endl;
    else if(a+b > 60)
        cout<<4<<endl;
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
