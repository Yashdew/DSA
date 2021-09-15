#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int number, cheatTime,totaltime;
    cin>>number>>cheatTime>>totaltime;


    vector<vector<int>> array;

    vector<vector<int>> newArray;
    int checkTime = 0; 
    for(int i=0;i<number;i++)
    {
        vector<int> time;
        int startTemp,endTemp;
        cin>>startTemp>>endTemp;
        time.push_back(startTemp);
        time.push_back(endTemp);
        array.push_back(time);        
    }
    
    sort(array.begin(),array.end());

    int LL = array[0][0];
    int UL = array[0][1];
    
    int timecheck=0;
    for(int i=0;i<array.size();i++)
    {
        if( LL <= array[i][0] &&  UL >= array[i][0]  )
        {
            if( UL < array[i][1] )
                UL = array[i][1];
            else   
                continue;
        }
        else
        {
           timecheck = timecheck + UL - LL;
           LL = array[i][0];
           UL = array[i][1];
        }
    }
    //timecheck = timecheck + UL - LL;
    if( totaltime - checkTime >= cheatTime )
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
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
