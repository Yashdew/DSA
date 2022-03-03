#include <bits/stdc++.h>
using namespace std;
void solve()
{
    double x1,x2,y1,y2;

    cin>>x1>>x2>>y1>>y2;

    if( y1/x1 < y2/x2 )
        cout<<-1<<endl;
    else if(y1/x1 > y2/x2 )
        cout<<1<<endl;
    else
        cout<<0<<endl;
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
