#include <bits/stdc++.h>
using namespace std;
void  solve()
{
    int start,end;

    cin>>start>>end;
    int sum=0;
    for(int i=start;i<=end;i++)
    {
        sum = sum + i*i;
    }
    cout<<sum<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
        solve();
    return 0;
}
