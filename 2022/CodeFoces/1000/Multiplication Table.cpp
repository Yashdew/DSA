#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int num;
    long long int value;
    cin>>num>>value;

    long long count = 0;
    for(long long  i=1;i<=num;i++){
        if( (value % i) == 0  && (value/i) <= num )
            count++;
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
