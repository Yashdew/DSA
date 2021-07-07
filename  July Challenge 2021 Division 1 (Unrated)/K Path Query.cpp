#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int nodes;
    cin>>nodes; 

    vector<int> array[nodes];
    for(int i=0;i<nodes-1;i++)
    {
        int u,v;
        cin>>u>>v;
        array[u].push_back(v);
        array[v].push_back(u);
    }

    int query;
    cin>>query;

    while(query--)
    {
        int sizeofarray;
        cin>>sizeofarray;
        while(sizeofarray--)
        {
            int path;
            cin>>path;
        }
    }
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
