#include <iostream>
#include <bits/stdc++.h>
#include <numeric>
#define ll long long
using namespace std;
 
const int M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}
 
ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}
 
ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}
 
 
void solve(){
    int k,n,m;
    cin>>k>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
 
    int i=0,j=0;
    vector<int>ans;
    while(i<n || j<m){
        if(i<n && j<m){
            if(a[i]==0) ans.push_back(0), i++, k++;
            else if(b[j]==0) ans.push_back(0), j++, k++;
            else{
                if(a[i]<b[j] && a[i]<=k) ans.push_back(a[i]), i++;
                else if(a[i]>=b[j] && b[j]<=k) ans.push_back(b[j]), j++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
        else if(i<n){
            if(a[i]==0) ans.push_back(0), i++, k++;
            else{
                if(a[i]<=k) ans.push_back(a[i]), i++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
        else if(j<m){
            if(b[j]==0) ans.push_back(0), j++, k++;
            else{
                if(b[j]<=k) ans.push_back(b[j]), j++;
                else{
                    cout<<-1<<"\n";
                    return;
                }
            }
        }
    }
    for(auto i : ans) cout<<i<<" ";
        cout<<"\n";
}  
 
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            // cout<<fixed;
            // cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
    //         int t=1;
    //         cin>>t;
    //         for(int i=1;i<=t;i++){
    //         //    cout<<"Case #"<<i<<": ";  
                
    // }
    solve();
    return 0;
}