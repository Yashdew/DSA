#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int X,Y;
    cin>>X>>Y;

    if( (X+Y)%2==0 )
        cout<<"Janmansh"<<endl;
    else
        cout<<"Jay"<<endl;
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
