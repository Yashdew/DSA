#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    if(num <= 10 || num>21)
        cout<<0<<endl;
    else if(num==20)
        cout<<15<<endl;
    else
        cout<<4<<endl;
}   
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
