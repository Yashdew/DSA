#include <bits/stdc++.h>
using namespace std;
bool checkbipartite(int node,vector<int>adj[],vector<int> &visited)
{
    for(auto it:adj[node])
    {
        if(visited[it]==-1)
        {
            visited[it] = 1 - visited[node];
            if(!checkbipartite(it,adj,visited))
                return false;
        }
        else if(visited[it]==visited[node])
        {
            return false;
        }
    }
    return true;
}
bool bipartite(int n,vector<int>adj[],vector<int> &visited)
{
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==-1)
        {
            visited[i]=0;
            if(!checkbipartite(i,adj,visited))
                return false;
        }
    }
    return true;
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
    vector<int> visited(n+1,-1);
    if( bipartite(n,adj,visited) )
        cout<<"YUSSSSSSSS";
    else
        cout<<"FALSE";
    return 0;
}
