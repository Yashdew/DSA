#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int N,M,K;
    
    cin>>N>>M>>K;

    map<int,int> hashmap;    
    for(int i=0;i<K;i++)
    {
        int temp;
        cin>>temp;
        hashmap[temp]++;
    }

    vector<int> L;
    for(auto it= hashmap.begin();it!=hashmap.end();it++)
    {
        if( it->second >= 2  && it->first <= N ) 
        {
            L.push_back(it->first);
        }
    }
    cout<<L.size()<<" ";
    for(auto curr : L)
        cout<<curr<<" ";
    
    cout<<endl;

}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
    int i=0;
    while (i<testCases)
    {
        solve();
        i++;
    }

    return 0;
}
