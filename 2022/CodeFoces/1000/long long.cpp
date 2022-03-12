#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;
    cout<< (num-1)*(num)*(num+1)/6 +num<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
