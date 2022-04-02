#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long m,n,t,b,c,d,i,j,k,x,y,z,l,q,r;
    long long cn=0,ans=0;
    cin>>m>>n>>x;
    i=m%x, j=n%x;
    ans=(i+j)/x;
    if( ans >=1 )
        cn=x- max(i,j);
    ans+=(m/x + n/x );
    cout<< ans <<  " "<<cn<<endl;;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();


    return 0;
}
