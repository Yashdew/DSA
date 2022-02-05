#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int num,k;
    cin>>num>>k;

    if( (num+1)/2 >= k)
    {
        //odd
       cout<<k*2 -1<<endl;
    }   
    else
    {
        //even
        long long int sum = (num + 1)/2;
        k = k- sum;
        cout<<k * 2<<endl;
    }     
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
