//Optimal2:
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll arr[n],sum=(n*(n+1))/2,sumsq=(n*(n+1)*(2*n+1))/6;
    for(ll i=0;i<n;i++) cin>>arr[i];
    int xor1=0,xor2=0;
    for(int i=0;i<n;i++){
        xor1^=arr[i];
        xor2^=(i+1);
    }
    xor1^=xor2;
    int x,y,r=0;
    while(!((xor1>>r)&1)) r++;      // while the right shift of xor1 number is odd i.e find the rightmost set bit in xor1;
    stack<int>stack1,stack2;
    for(int i=1;i<=n;i++){
        if((i>>r)&1) stack1.push(i);    // adding the elements which have rth bit set in stack1
        else stack2.push(i);            // adding the elements which have rth bit clear in stack2
        if((arr[i-1]>>r)&1) stack1.push(arr[i-1]);  // adding the elements which have rth bit set in stack1
        else stack2.push(arr[i-1]);     // adding the elements which have rth bit clear in stack2
    }
    int xor3=0; xor2=0;
    while(!stack1.empty()){
        xor2^=stack1.top(); stack1.pop();  // cancelling the elements each other e.g = 5^5=0
    }
    while(!stack2.empty()){
        xor3^=stack2.top(); stack2.pop();  //  llly in stack2
    }
    // now the xor2 and xor3 give the missing and repeating element. To find which one is from the copule, we traverse the array.
    int missing,repeating;
    for(int i=0;i<n;i++){
        if(arr[i]==xor2){
            repeating=xor2; missing=xor3; break;
        }else if(arr[i]==xor3){
            repeating =xor3; missing=xor2;  break;
        }
    }
    cout<<"missing: "<<missing<<" repeating: "<<repeating<<endl;
    return;
}
int main(){
    int t=1,z=1;
    // scanf("%d",&t);
    while(z<=t){
        solve(); z++;
    }
    return 0;
}