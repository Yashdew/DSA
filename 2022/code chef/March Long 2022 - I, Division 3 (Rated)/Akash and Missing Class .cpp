#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    long long count = num/7;
    num = num - (count*7);
    
    if( (num%7) == 6 )
        count++;
    cout<<count<<endl;
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
