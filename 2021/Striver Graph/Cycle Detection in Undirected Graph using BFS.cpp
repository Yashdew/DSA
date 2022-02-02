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
bool ischeck(int node,int n,vector<int> visited,vector<int> adj[])
{
    queue<pair<int,int>> qList;
    visited[node]=1;
    qList.push({node,-1});

    while(!qList.empty())
    {
       int firstPair = qList.front().first;
       int secondPair = qList.front().second;
       qList.pop();

       for(auto it: adj[firstPair])
       {
           if(visited[it]==0)
           {
               visited[it]=1;
               qList.push({it,node});
           }
           else if(secondPair!=it)
           {    
               return true;
           }
       } 
    }
    return false;
}
bool bfsGraph(int n, vector<int> adj[])
{
    vector<int> visited(n+1,0);
    

    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            if(ischeck(i,n,visited,adj))
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

    bool check = bfsGraph(n,adj);

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
