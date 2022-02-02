#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;

    map<char,int> hashmap;

    for(int i=0;i<s.length();i++)
    {
        hashmap[s[i]]++;
    }
    if(hashmap.size()%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        solve();
    return 0;
}
