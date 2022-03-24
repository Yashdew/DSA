#include <bits/stdc++.h>
using namespace std;
long long hig(long long temp){
    long long dem;
    for(long long i=0;i<=31;i++){
        long long c = (1<<i);
        if(c&temp){
            dem = i;
        }
    }
    return dem;
}
void solve()
{
    long long num;
    cin>>num;
        map<long long,long long> hashmap;
        for(long long i=0;i<num;i++){
            long long temp;
            cin>>temp;
            long long c = hig(temp);
            hashmap[c]++;
        }
        long long ans = 0;
        for(auto x : hashmap){
            long long d = x.second;
            ans += ((d-1)*d)/2;
        }
        cout<<ans<<endl;
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