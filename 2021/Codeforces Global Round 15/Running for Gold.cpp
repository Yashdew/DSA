#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<vector<int>> table;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        vector<int> array;
        for(int j=0;j<5;j++)
        {
            int temp;
            cin>>temp;
            array.push_back(temp);
        }
        table.push_back(array);
        array.clear();
    }

    if(n==1)
    {
        cout<<1<<endl;
    }
    else
    {
        map<int,int> hashmap;
        for(int j=0;j<5;j++)
        {
            int minimum = INT_MAX;
            int playernum = 0;
            for(int i=0;i<n;i++)
            {
                if(minimum > table[i][j])
                {
                    playernum = i+1;
                    minimum = table[i][j];
                }
            }
            hashmap[playernum]++;
        }

        int maximum = 0;
        int bestplayer = -1;
        for(auto it= hashmap.begin();it!=hashmap.end();it++)
        {
            if(it->second>1)
            {
                if(it->second==maximum)
                {
                    bestplayer = -1;
                    break;
                }

                else if(it->second > maximum)
                {
                    bestplayer = it->first;
                    maximum=it->second;
                }
            }
            
        }

        cout<<bestplayer<<endl;
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
