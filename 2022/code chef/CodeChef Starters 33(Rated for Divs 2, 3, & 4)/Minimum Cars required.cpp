#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    int count = num/4;

    if(num%4!=0)
        count++;
    cout<< count <<endl;
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
