#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,X;
    cin>>n>>X;

    
    if(n%2==1){
        cout<< X<<" ";
        for(int i=1;i<=n/2;i++){
            cout<<X-i<<" "<<X+i<<" ";
        }
        cout<<endl;
    }
    else{
        //cout<< X<<" ";
        for(int i=1;i<=n/2;i++){
            cout<<X-i<<" "<<X+i<<" ";
        }
        cout<<endl;
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
