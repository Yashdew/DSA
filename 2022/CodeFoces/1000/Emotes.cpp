#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long  n,m,k;
    cin>>n>>m>>k;

    vector<long long> array(n,0);
    for(long long i=0;i<n;i++)
        cin>>array[i];

    sort(array.rbegin(),array.rend());
    cout << ( m / (k + 1) ) * (array[0] * k + array[1]) + (m % (k + 1)) * array[0] << endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
