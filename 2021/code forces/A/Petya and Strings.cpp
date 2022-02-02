#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string A,B;
    cin>>A>>B;
    transform(A.begin(), A.end(), A.begin(), ::tolower);
    transform(B.begin(), B.end(), B.begin(), ::tolower);
    
    int x = A.compare(B);

    if(x!=0)
    {
        if(x>0)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    else
    {
        cout<<0<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        solve();
    return 0;
}
