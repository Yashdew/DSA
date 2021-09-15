#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    int n=1;
    int count=0;
    while(num>0)
    {
        count++;
        num = num - n;
        n = n+2;
    }   
    cout<<count<<endl;
}
// add two number
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
