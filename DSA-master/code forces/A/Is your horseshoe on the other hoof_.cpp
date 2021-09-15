#include <bits/stdc++.h>
using namespace std;
void solve()
{
    map<int,int> hashmap;
    for(int i=0;i<4;i++)
    {
        int temp;
        cin>>temp;
        hashmap[temp]++;
    }
    if(hashmap.size()==4)
        cout<<0<<endl;
    else if(hashmap.size()==3)
        cout<<1<<endl;
    else if(hashmap.size()==1)
        cout<<3<<endl;
    else if(hashmap.size()==2)
        cout<<2<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
