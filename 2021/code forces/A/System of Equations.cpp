#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;

    int a,b;

    int count=0;
    for(int a=0;a*a<=n && a<=m ; a++)
    {
        b = n - (a*a);
        if( a + (b*b ) == m)
        {
            count++;
        }
    }
    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
       solve();
   
    return 0;
}
