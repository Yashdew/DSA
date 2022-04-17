#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long X,Y,Z;
    cin>>X>>Y>>Z;
    if(Z - Y/X  <= 0)
        cout<<0<<endl;
    else
        cout<< Z - Y/X<<endl;
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
