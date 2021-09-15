#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str,str1;
    cin>>str>>str1;

    string temp;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='0')
        {
            if(str1[i]=='0')
            {
                temp = temp +'0';
            }
            else
            {
                temp = temp +'1';
            }
        }
        else
        {
            if(str1[i]=='1')
            {
                temp = temp +'0';
            }
            else
            {
                temp = temp +'1';
            }
        }
    }

    cout<<temp<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
