#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num,list,strip;
    cin>>num>>list>>strip;

    map<int,int> hashmap;
    for(int i=1;i<=list;i++)
    {
        int totalCol;
        cin>>totalCol;

        for(int j=0;j<totalCol;j++)
        {
            int temp;
            cin>>temp;
            hashmap[temp]=i;
        }
    }

    vector<int> array;
    for(int i=0;i<strip;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }

    int count=1;
    int prev = hashmap[array[0]];
    for(int i=1;i<array.size();i++)
    {
        if(hashmap[array[i]] != prev )
        {
            count++;
            prev = hashmap[array[i]];
        }
    }

    cout<<count<<endl;
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
