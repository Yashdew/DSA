#include <bits/stdc++.h>
using namespace std;

int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;

    int adj[n+1][n+1]={0};
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u][v]=1;
        adj[v][u]=1;
    }

    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<n+1;j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
