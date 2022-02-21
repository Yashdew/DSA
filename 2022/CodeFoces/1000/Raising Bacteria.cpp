#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    int count = 0;

    while(num/2!=0)
    {
        if(num%2==1)
            count++;

        num=num/2;
    }
    cout<<count + 1<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
