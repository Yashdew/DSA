#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(){
    long long t,num;
    cin>>t;
    while(t--){
        cin>>num;
        long long du;
        long long ge;
        for(int i=0;i<=31;i++){
            long long c = (1<<i);
            if(c&num){
                du = i;
                ge = c;
            }
        }
        int ans = 0;
        int f = 1;
        for(int i=0;i<du;i++){
            ans += (f-1);
            f*=2;
        }
        ans += (num-ge);
        cout<<ans<<endl;
    }
}