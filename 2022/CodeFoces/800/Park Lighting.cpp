#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,m;
    cin>>n>>m;

    if( (n*m)%2==0 )
        cout<<(n*m)/2<<endl;
    else{
        cout<< ( (n*m)+1 )/2<<endl;
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
