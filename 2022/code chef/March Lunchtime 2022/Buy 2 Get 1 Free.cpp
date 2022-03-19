#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num, rate;
    cin>>num>>rate;

    long long temp = (num/3) * 2;
    long long temp1 = num%3;

    cout<< temp*rate + temp1 * rate<<endl;
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
