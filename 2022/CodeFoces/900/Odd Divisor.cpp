#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    if(num%2)
    {
        cout<<"YES"<<endl;
        return;
    }
        
    
    while(num%2==0)
    {
        num /= 2;
    }

    if(num > 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
