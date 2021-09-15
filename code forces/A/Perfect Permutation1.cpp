#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    if(num%2==1)
        cout<<"-1"<<" ";
    else
    {
        for(int i=0;i<num;i++)
        {
            if(i%2==0)
            {
                cout<<i+2<<" ";
            }
            else
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        solve();
    return 0;
}
