#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string a,b;
    cin>>a>>b;

    if(a.length() < b.length() )
    {
        string C = a;
        a = b;
        b = C;
    }
    int p,q,r;
    p=0;
    q=p;
    r=0;

    int count = 0;
    while(r < b.length() && q < a.length() && p < a.length() )
    {

        if(a[q]==b[r])
        {
            count++;
            q++;
            r++;
        }
        else
        {
            count=0;
            p++;
            q=p;
            r=0;
        }
    }
    if(count == b.length())
        cout<<1<<endl;
    else
        cout<<0<<endl;
}       
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases=24;
    //cin >> testCases;
   
    while (testCases--)
    {
        solve();
    }

    return 0;
}
