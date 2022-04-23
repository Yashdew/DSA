#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,m;
    cin>>n>>m;
    if(n==1 && m==1){
        cout<<"0"<<endl;
        return;
    }
    else if( n==1 || m==1){
        if( max(n,m) > 2){
            cout<<"-1"<<endl;
            return;
        }
        else{
            cout<<1<<endl;
            return;
        }
    }
    else{
        if( n%2==0 && m%2==0){
            cout<<n+m<<endl;
        }
        else if(n%2!=0 && m%2!=0){
            cout<<n+m<<endl;
        }
        else{
            cout<< n+m + 2<<endl;
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
