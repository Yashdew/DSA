#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num,X;
    cin>>num>>X;

    for(long long i=1;i<=num;i++){
        if( (X%i==0) && (X/i) <= (num-i+1) ){
            cout<<"YES"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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
