#include <bits/stdc++.h>
using namespace std;

void dfsfunction(int node,vector<int> array[],vector<int> &visited,vector<int> &dfsarray)
{
    dfsarray.push_back(node);
    visited[node]=1;
    for(auto it:array[node])
    {
        if(visited[it]==0)
        {
            dfsfunction(it,array,visited,dfsarray);
        }
    }
}
vector<int> dfs(vector<int> array[],int n)
{
    vector<int> visited(n+1,0);
    vector<int> dfsarray;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            dfsfunction(i,array,visited,dfsarray);
        }
    }
    return dfsarray;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m;
    cin>>n>>m;

    vector<int> array[n+1];

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        array[u].push_back(v);
        array[v].push_back(u);
    }
    vector<int> dfsarray;
    dfsarray = dfs(array,n);
    
    for(int i=0;i<dfsarray.size();i++)
    {
        cout<<dfsarray[i]<<" ";
    }
    cout<<endl;
    return 0;
}
