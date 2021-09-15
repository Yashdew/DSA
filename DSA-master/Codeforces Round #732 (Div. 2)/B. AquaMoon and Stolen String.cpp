#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string> str;

    int countAll[m][26];
    memset(countAll,0,sizeof(countAll));
    for(int i=0;i<n;i++)
    {
        string temp;
        cin>>temp;
        str.push_back(temp);

        for(int j=0;j<m;j++)
        {
            countAll[j][temp[j]-'a']++;
        }
    }

    
    int countPair[m][26];
    memset(countPair,0,sizeof(countPair));
    for(int i=0;i<n-1;i++)
    {
        string temp;
        cin>>temp;

        for(int j=0;j<m;j++)
        {
            countPair[j][temp[j]-'a']++;
        }
    }
    
    string res;
    for ( auto &x:str)
    {
        for(int j=0;j<m;j++)
        {
            countAll[j][x[j]-'a']--;
        }

        int flag=1;

        for(int i=0;i<m;i++)
        {
            for(int k=0;k<26;k++)
            {
                if(countAll[i][k]!=countPair[i][k])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                break;
        }

        if(flag==1)
        {
            res = x;
            break;
        }

        for(int j=0;j<m;j++)
        {
            countAll[j][x[j]-'a']++;
        }
    }

    cout<<res<<endl;
    cout.flush();
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
