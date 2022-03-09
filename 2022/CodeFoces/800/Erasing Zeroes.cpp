#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;

    int pos1=0,pos2=0,count=0;
    for(int i=0;i<str.length();i++){
        if(str[i]=='1')
        {
            pos1=i;
            break;
        }
    }

    for(int i=str.length()-1;i>=0;i--){
        if(str[i]=='1')
        {
            pos2=i;
            break;
        }
    }

    for(int i=pos1;i<pos2;i++)
    {
        if(str[i]=='0')
            count++;
    }

    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
            solve();
    }

    return 0;
}
