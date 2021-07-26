#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int A,B;
    cin>>A>>B;

    int X;
    if(A==B)
        cout<<0<<endl;
    else if(A < B)
    {
        int sum = ((B-A)/2) + 1;
        cout<<sum<<endl;        
    }
    else if(A > B)
    {
        if( (A-B)%2==0 )
        {
            int sum=((B-A)/2) + 1;
            cout<<sum<<endl;
        }
        else
        {
            int sum=(B-A)/2;
            cout<<sum<<endl;
        }
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        solve();
    }

    return 0;
}
