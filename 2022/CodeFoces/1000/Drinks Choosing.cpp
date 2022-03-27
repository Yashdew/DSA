#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;

    map<int,int> hashmap;
    for(int i=0;i<n;i++){   
        int temp;
        cin>>temp;
        hashmap[temp]++;
    }

    int count=0;
    int ans=0;
    for(auto it:hashmap){
        count += it.second % 2;
        ans += it.second/2 * 2;
    }
    ans += (count+1)/2;

    cout<<ans<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}
