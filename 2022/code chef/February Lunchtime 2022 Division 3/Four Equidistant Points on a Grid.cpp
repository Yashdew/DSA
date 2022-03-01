#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    if(num%2){
        cout<<"-1"<<endl;
        //continue;
        return;
    }

    cout<<0<<" "<<num/2 <<endl;
    
    cout<<num/2<<" "<< 0<<endl;
    
    cout<<0<<" "<<-(num/2) <<endl;
    
    cout<<-(num/2)<<" "<< 0<<endl;
    
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
            solve();
    
    return 0;
}