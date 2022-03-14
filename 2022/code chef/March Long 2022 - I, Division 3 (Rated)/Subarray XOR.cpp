#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    string str;

    cin>>num>>str;
    long long MOD = 998244353;
    vector<long long> L(num,0);
    long long P=1;

    if(str[0]=='1'){
        L[0]=1;
    }
    long long X = L[0];

    for(long long i=1;i<num;i++){
        if(str[i]=='1'){
            X+=i+1;
        }
        L[i]=X;
        L[i]=L[i]%2;
    }

    long long res=0;

    for(int i=num-1;i>=0;i--){
        if(L[i]==1){
            res+=P;
            res%=MOD;
        }
        P*=2;
    }
    P%=MOD;

    cout<<res%MOD<<endl;
    
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
