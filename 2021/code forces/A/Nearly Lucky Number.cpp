#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string num;
    cin>> num;

    int flag=0;
    int count=0;
    for(int i=0;i<num.length();i++)
    {
        if(num[i]=='4' || num[i]=='7')
        {
            count++;
        }   
    }

    if(count==4 || count==7)
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
