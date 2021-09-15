#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int N,K;
    cin>>N>>K;

    long long int power = pow(2,N) - 1;
    long long int totalshift = pow(2,N-1);

    long long int ans=0;
    if( K > totalshift)
        ans = power*totalshift*2;
    else
        ans = power*K*2;
    
    cout<<ans<<endl;

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
