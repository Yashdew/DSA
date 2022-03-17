#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x,y,z;

    cin>>x>>y>>z;

    if(x>y)
        swap(x,y);
    if(x>z)
        swap(z,x);
    if(y>z)
        swap(y,z);
    

    if(y==z)
    {
        cout<<"YES"<<endl;
        cout<<x<<" "<<x<<" "<<z<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
