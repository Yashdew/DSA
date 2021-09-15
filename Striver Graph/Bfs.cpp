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

vector<int> bfsGraph(int n, vector<int> adj[])
{

    vector<int> bfs;
    vector<int> visited(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            queue<int> q;
            q.push(i);
            visited[i]=1;
            
            while(!q.empty())
            {
                int node = q.front();
                q.pop();
                bfs.push_back(node);
                
                for(auto it : adj[node])
                {
                    if(visited[it]==0)
                    {
                        q.push(it);
                        visited[it]=1;
                    }
                }
            }
        }
    }
    return bfs;
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

    vector<int> array = bfsGraph(n,adj);

    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
    printGraph(adj,n);
    return 0;
}
