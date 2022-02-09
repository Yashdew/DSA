#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str; 
    cin>>str;

    for(int i=0;i<str.length();i++)
    {
        if(i==0)
        {
            if( int(str[i]) >= 97 && int(str[i]) <= 122 )
                str[i] = str[i] - 32; 
        }
        else
        {
            if( int(str[i]) >= 65 && int(str[i]) <= 90 )
                str[i] = str[i] + 32;
        }
    }

    cout<<str<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
