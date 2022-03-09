#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;
    int count=0;
    int sum=0;
    int i=0;
    int maximum = 0;
    while(num > 0)
    {
        i++;
        maximum = sum + i;
        sum = maximum;
        num -= maximum;
        if(num < 0){
            i--;
        }
    }
    cout<<i<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
