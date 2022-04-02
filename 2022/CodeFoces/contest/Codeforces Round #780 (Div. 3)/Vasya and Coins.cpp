#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long x,y;
    cin>>x>>y;

    if(x==0)
        cout<<1<<endl;
    else{
        cout<< (x*1 + y*2 + 1)<<endl;
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
