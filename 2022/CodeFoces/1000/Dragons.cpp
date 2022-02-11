#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int s,n,x,y;
    cin>>s>>n;
    int flag=1;

    vector<pair <int,int>> hashmap;
    while(n--)
    {
        cin>>x>>y;
        hashmap.push_back( make_pair(x,y));
     
    }
    
    sort(hashmap.begin(),hashmap.end());

    for(auto it:hashmap)
    {
        if(s > it.first)
        {
            s+=it.second;
            flag=1;
        }
        else
        {
            flag=0;
            break;
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
