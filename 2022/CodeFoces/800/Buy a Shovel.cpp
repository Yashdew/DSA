#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num,r;
    cin>>num>>r;
    long long i=1;
    while(1)
    {
        long long total = num * i;
        long long rTotal = total - r;

        if(rTotal%10==0 || total%10==0){
            cout<<i<<endl;
            return;
        }
        i++;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
