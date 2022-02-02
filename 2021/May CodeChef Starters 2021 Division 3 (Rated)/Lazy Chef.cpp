#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int x , m , d;
    cin>> x>>m>>d;

    return min(x*m,x+d);
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
