#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num,times;
    cin>>num>>times;

    while(times--)
    {
        int temp = num%10;
        if(temp==0)
            num/=10;
        else
            num = num -1;
    }

    cout<<num<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
