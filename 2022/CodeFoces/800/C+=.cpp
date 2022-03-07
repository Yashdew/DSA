#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a,b,n;
    cin>>a>>b>>n;
    int count=0;
    if( a < b)
        swap(a,b);
    int sum=0;

    while( n >= sum )
    {
        if(a > b){
            b +=a;
            sum = b;
            count++;
        }
        else {
            a+=b;
            sum = a;
            count++;
        }
        if(sum > n)
            break;
    }
    cout<<count<<endl;
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
