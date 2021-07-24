#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;

    map<char,int> hashmap;
    for(int i=0;i<str.length();i++)
    {
        hashmap[str[i]]++;
    }

    int count2=0,count1=0;

    for(auto it=hashmap.begin();it!=hashmap.end();it++)
    {
        if(it->second>=2)
            count2++;
        else if(it->second==1)
            count1++;        
    }

    int count = count2 + (count1/2);
    
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
