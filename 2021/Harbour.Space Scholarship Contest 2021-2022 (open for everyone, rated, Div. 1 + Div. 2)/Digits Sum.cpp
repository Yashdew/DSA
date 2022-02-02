#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n<9)
    {
        cout<<0<<endl;
    }
    else if(n==9)
    {
        cout<<1<<endl;
    }
    else
    {
        if(n%10==9)
        {
            n = n/10;
            n++;
        }
        else
        {
            n = n/10;
        }
        cout<<n<<endl;
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
