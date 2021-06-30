#include <bits/stdc++.h>
using namespace std;
vector<int> bfs(vector<int> array[],int n)
{
    vector<int> visited(n+1,0);
    vector<int> bfsList;
    for(int i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            queue<int> qList;
            qList.push(i);
            visited[i]=1;

            while(!qList.empty())
            {
                int node=qList.front();
                qList.pop();
                bfsList.push_back(node);

                for(auto it: array[node])
                {
                    if(visited[it]==0)
                    {
                        qList.push(it);
                        visited[it]=1;
                    }
                }
            }
        }
    }
    return bfsList;

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
    vector<int> bfsarray;
    bfsarray = bfs(array,n);
    for(int i=0;i<n;i++)
    {
        cout<<i<<" ";
        for(int j=0;j<array[i].size();j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<bfsarray.size();i++)
    {
        cout<<bfsarray[i]<<" ";
    }
    cout<<endl;
    return 0;

}
