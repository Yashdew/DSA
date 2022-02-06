#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;

    int flag=0;
    for(auto it : str)
    {
        if(it>=33 && it<=126)
        {
            if(it == 'H')
                flag=1;
            if(it == 'Q')
                flag=1;
            if(it == '9')
                flag=1;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
