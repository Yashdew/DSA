#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b;

    cin>>a>>b; 

    if(a==b)
        cout<<0<<endl;
    else if ( a < b){
        long long temp = (b - a)/10;
        long long temp1 = (b - a)%10;
        if(temp1 > 0)
            cout<<temp+1<<endl;
        else
            cout<<temp<<endl;

    }
    else if( a > b){
        long long temp = (a - b)/10;
        long long temp1 = (a - b)%10;
        if(temp1 > 0)
            cout<<temp+1<<endl;
        else
            cout<<temp<<endl;
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
