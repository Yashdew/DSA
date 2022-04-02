#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long M=10e9+7;
    long long n,m;
    cin>>n>>m;

    vector<long long> array(n);

    for(long long i=0;i<n;i++)
        cin>>array[i];

    while(m--){
        long long C,X;
        cin>>C>>X;

        vector<long long> unity(2*X);
        for(long long i=0;i<2*X;i++){
            cin>>unity[i];
        }

        long long temp = array[C-1];

        array[C-1] = 0;
        for(long long i=0;i<unity.size()-1;i+=2){
            array[unity[i+1]-1] = (array[unity[i+1]-1] + (temp*unity[i]) )%M;
        }
    }

    for(auto x:array){
        cout<<x<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
