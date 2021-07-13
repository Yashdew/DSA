#include <bits/stdc++.h>
using namespace std;
int solve()
{
    vector<int> axis(6,0);

    for(int i=0;i<6;i++)
    {
        cin>>axis[i];
    }

    int dist = abs(axis[0] - axis[2]) + abs(axis[1] - axis[3]);

    if(axis[0]==axis[2] && axis[0]==axis[4])
    {
        if( ( axis[5] > axis[1] && axis[5] < axis[3]  ) || ( axis[5] < axis[1] && axis[5] > axis[3] ) )
        {
            dist+=2;
        }
    }
    else if(axis[1]==axis[3] && axis[1]==axis[5])
    {
        if( ( axis[4] > axis[0] && axis[4] < axis[2]  ) || ( axis[4] < axis[0] && axis[4] > axis[2] ) )
        {
            dist+=2;
        }
    }
    cout<<dist<<endl;
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
