#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;
    string str1;
    cin>>str1;
    string str2;
    cin>>str2;
    
    map<char,int> hashmap;
    
    for(int i=0;i<str.size();i++)
    {
        hashmap[str[i]]++;
    }
    
    for(int i=0;i<str1.size();i++)
    {
        hashmap[str1[i]]++;
    }
    
    int flag=0;
    for(int i=0;i<str2.size();i++)
    {
        auto it = hashmap.find(str2[i]);
        if(it == hashmap.end())
        {
            flag=1;
            break;
        }
        else
        {
            hashmap[str2[i]]--;
            if(hashmap[str2[i]] == 0)
            {
                hashmap.erase(str2[i]);
            }
        }
    }
    //cout<<hashmap.size()<<endl;
    if(flag==1)
        cout<<"NO"<<endl;
    else
    {
        if(hashmap.size()!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
