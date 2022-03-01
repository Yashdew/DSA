#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;

    cin>>num;
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        sum1+=temp;
    }
    for(int i=0;i<num-1;i++){
        int temp;
        cin>>temp;
        sum2+=temp;
    }
    for(int i=0;i<num-2;i++){
        int temp;
        cin>>temp;
        sum3+=temp;
    }

    cout<<sum1 - sum2<<endl;
    cout<<sum2 - sum3<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}
