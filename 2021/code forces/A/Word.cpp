#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    string str;
    cin>>str;

    int lowerstr=0;
    int upperstr=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>= 65 && str[i]<=90 )
        {
            upperstr++;
        }
        else if(str[i]>= 97 && str[i]<=122)
        {
            lowerstr++;
        }
    }

    if(lowerstr>=upperstr)
    {
        transform(str.begin(), str.end(), str.begin(), ::tolower);
    }
    else
    {
        transform(str.begin(), str.end(), str.begin(), ::toupper);
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
