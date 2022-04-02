#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int X,Y;

    cin>>X>>Y;

    if(Y==0)
        cout<<X<<endl;
    
    else if(X==Y)
        cout<<Y*2 - 1<<endl;
    else
        cout<<Y*2 + (X-Y)<<endl;

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
