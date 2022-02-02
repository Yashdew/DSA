#include <bits/stdc++.h>
using namespace std;
bool bipartite(int n,vector<int> adj[])
{
    vector<int> visited(n+1,-1);
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==-1)
        {
            queue<int> qlist;
            qlist.push(i);
            visited[i]=0;
            while(!qlist.empty())
            {
                int node = qlist.front();
                qlist.pop();
                for(auto it:adj[node])
                {
                    if(visited[it]==-1)
                    {
                        if(visited[node]==0)
                        {
                            visited[it]=1;
                            qlist.push(it);
                        }
                        else if(visited[node]==1)
                        {
                            visited[it]=0;
                            qlist.push(it);
                        }
                    }
                    else
                    {
                        if(visited[node]==0)
                        {
                            if(visited[it]==0)
                                return false;
                        }
                        else if(visited[node]==1)
                        {
                            if(visited[it]==1)
                                return false;
                        }
                    }
                }
                
            }
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
    if( bipartite(n,adj) )
        cout<<"YUSSSSSSSS";
    else
        cout<<"FALSE";

    return 0;
}
