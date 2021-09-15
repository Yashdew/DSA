#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num,limit;
    int count=0;
    cin>>num>>limit;

    map<int,int,greater <int>> hashmap;
    while(num--)
    {
        int temp=0;
        cin>>temp;
        hashmap[temp]++;
    }
    
    for(auto it= hashmap.begin();it!=hashmap.end();it++)
    {
        if(count < limit && it->first > 0 )
        {
            count += it->second;
        }
        else 
            break;
    }
    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
