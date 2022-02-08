#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;

    int maximum = INT_MIN;

    maximum = max(maximum,a*b*c);
    maximum = max(maximum,a+b+c);
    
    maximum = max(maximum,(a*b)+c);
    //maximum = max(maximum,(a*c)+b);
    maximum = max(maximum,(b*c)+a);

    maximum = max(maximum,(a+b)*c);
    //maximum = max(maximum,(a+c)*b);
    maximum = max(maximum,(b+c)*a);

    cout<<maximum<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}
