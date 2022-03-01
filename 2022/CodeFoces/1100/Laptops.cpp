#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    int A,B;
    for(int i=0;i<num;i++){
        cin>>A>>B;
        if(A!=B){
            cout<<"Happy Alex"<<endl;
            return;
        }
    }
    cout<<"Poor Alex"<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}
