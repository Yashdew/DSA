#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    long long count=0;
    if(num >= 5)
    {
        count =count + num/5;
        num = num%5;
    }
    if(num < 5 && num >0){
        count++;
        num=0;
    }

    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
