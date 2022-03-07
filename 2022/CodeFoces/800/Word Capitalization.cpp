#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;

    if( int(str[0]) >=97 &&  int(str[0]) <=122 )
    {
        str[0] = str[0] - 32;
    }
    cout<<str<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
