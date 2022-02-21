#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int angle;
    cin>>angle;

    if( (2*angle)%(angle-180) == 0  ){
        cout<<"YES"<<endl;
        return;
    }
    else{
        cout<<"NO"<<endl;
        return;
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
