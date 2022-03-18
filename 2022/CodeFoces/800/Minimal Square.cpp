#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b;
    cin>>a>>b; 

    if(a==b)
    {
        cout<< 4 * a * a<<endl;
    }
    else{
        if(a < b)
            swap(a,b);

        if( a < 2*b)
        {
            cout<< pow(2*b,2)<<endl;
        }
        else{
            cout<<pow(a,2)<<endl;
        }
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
