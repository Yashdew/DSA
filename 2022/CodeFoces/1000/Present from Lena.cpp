#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    for(int i=-num;i<=num;i++){
        long long top = num - abs(i);
        for(int j=0;j<abs(i);j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<top;j++)
        {
            cout<<j<<" ";
        }
        for(int j=top;j>0;j--)
        {
            cout<<j<<" ";
        }

        cout<<0<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
