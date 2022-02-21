#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int num;
        cin>>num;
        long long int m =1;
        for(long long int i=1;i<50;i++)
        {
            m = 2 * m + 1;
            if(num%m) continue;
            cout<<num/m<<endl;
            break;
        }
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}
