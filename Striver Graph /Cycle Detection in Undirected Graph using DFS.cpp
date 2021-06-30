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

bool checkCycle(int node,int parent, vector<int> array[],vector<int> visited)
{
    visited[node]=1;
    for( auto it : array[node])
    {
        if(visited[it]==0)
        {
            if(checkCycle(it,node,array,visited))
                return true;
        }
        else if(it!=parent)
        {
            return true;
        }
    }
    return false;
}
bool dfsGraph(int n, vector<int> array[])
{
    vector<int> visited(n+1,0);

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            if( checkCycle(i,-1,array,visited) )
                return true;
        }
    }
    return false;
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

    bool check = dfsGraph(n,adj);

    if(check==true)
        cout<<"found the Cycle";
    else
        cout<<" Not able to find the cycle";
    // for(int i=0;i<array.size();i++)
    // {
    //     cout<<array[i]<<" ";
    // }
    cout<<endl;
    printGraph(adj,n);
    return 0;
}
