#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    return (x/a + y/b);
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        cout<<solve()<<endl;
    }

    return 0;
}
