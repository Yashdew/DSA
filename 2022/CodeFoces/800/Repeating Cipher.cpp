#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;
    string str;
    cin>>str;

    string strEnc;
    int i=0;
    int j=0;
    while(i<str.length())
    {
        strEnc = strEnc + str[i];
        j++;
        i=i+j;

        if(i >= str.length())
        {
            cout<<strEnc<<endl;
            return;
        }
    }
    cout<<strEnc<<endl;
            
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
