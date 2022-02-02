#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;

    int countKick = 0;
    
    int TeamACount = 0;
    int TeamAMiss = 0;
    
    int TeamBCount = 0;
    int TeamBMiss = 0;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='?')
            countKick++;

        if(i%2==0)
        {
            if(str[i]=='1')
                TeamACount++;
            else if(str[i]=='?')
                TeamAMiss++;
        }
        else if(i%2!=0)
        {
            if(str[i]=='1')
                TeamBCount++;
            else if(str[i]=='?')
                TeamBMiss++;
        }
    }

    if(countKick==10)
        cout<<10<<endl;
    else if(countKick==0)
        cout<<6<<endl;
    else
    {
        if(TeamACount > TeamBCount)
        {
            if(TeamAMiss > TeamBMiss)
            {

            }
            else if(TeamAMiss < TeamBMiss)
            {
                if( TeamACount + TeamAMiss >= 3 )
                {
                    countKick = countKick + TeamAMiss; 
                }
                else
                {
                    
                }
            }
            else if(TeamAMiss == TeamBMiss)
            {
                
            }

        }
        else if(TeamACount < TeamBCount)
        {
            if(TeamAMiss > TeamBMiss)
            {

            }
            else if(TeamAMiss < TeamBMiss)
            {

            }
            else if(TeamAMiss == TeamBMiss)
            {
                
            }
        }
        else if(TeamACount == TeamBCount)
        {
            if(TeamAMiss > TeamBMiss)
            {

            }
            else if(TeamAMiss < TeamBMiss)
            {

            }
            else if(TeamAMiss == TeamBMiss)
            {
                
            }
        }
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
