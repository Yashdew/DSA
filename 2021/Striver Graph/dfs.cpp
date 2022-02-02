#include <bits/stdc++.h>
using namespace std;

void printGraph(vector<int> adj[],int n)
{
    for(int i=0;i<=n;i++)
    {
        cout<<i<<" ";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
}

void dfslist(int node, vector<int> &visited, vector<int> adj[],vector<int> &dfs)
{
    dfs.push_back(node);
    visited[node]=1;
    for(auto it : adj[node])
    {
        if(visited[it]==0)
        {
            dfslist(it,visited,adj,dfs);
        }
    }
}
vector<int> dfsGraph(int n, vector<int> adj[])
{
    vector<int> dfs;
    vector<int> visited(n+1,0);

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            dfslist(i,visited,adj,dfs);
        }
    }
    return dfs;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> array = dfsGraph(n,adj);

    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    printGraph(adj,n);
    return 0;
}
