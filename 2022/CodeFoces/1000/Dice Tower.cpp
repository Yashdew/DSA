#include <bits/stdc++.h>
using namespace std;
void solve()
{
    unsigned long long num;

    cin>>num;

    int temp = num%14;

    int d = floor(num/14);

    if( temp >= 1 && temp <= 6 && d>=1)
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
