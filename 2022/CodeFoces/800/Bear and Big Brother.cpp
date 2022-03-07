#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int A,B;
    cin>>A>>B;

    int count=0;
    while(A<=B)
    {
        A=A*3;
        B=B*2;
        count++;
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
