#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int toast = (k*l)/nl;
    int salt = p/np;
    int lemon = c*d;

    int minimum = min(toast,salt);
    minimum = min(minimum,lemon);
    cout<<minimum/n<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
