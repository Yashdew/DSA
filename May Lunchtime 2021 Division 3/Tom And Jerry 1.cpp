#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c,d,steps;

    cin>>a>>b>>c>>d>>steps;

    int x = abs(a - c);
    int y = abs(b - d);
    int distance = x + y;
    //distance = abs);
    
    if(distance >steps )
    {
         cout<<"NO";
    }
    else if(distance == steps)
    {
        cout<<"YES";
    }
    else if(  (steps-distance)%2==0 )
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
