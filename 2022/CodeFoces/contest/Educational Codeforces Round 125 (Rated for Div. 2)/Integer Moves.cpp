#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a, b;
    cin>>a>>b;
    if(a == 0 && b == 0) 
        cout << 0;
    else {
        long long x = a * a;
        long long y = b * b;
        long long t = sqrt (x + y);
        if (t* t == x + y){
            cout<<1;
        }
        else 
        {
            cout<<2;
        }
    }
    cout<<endl;
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
