#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int k,n,w;
    cin>>k>>n>>w;

    long long int i=1;
    long long sum=0;
    while(i <= w)
    {
        int temp = k*i;
        sum=sum+temp;
        i++;
    }
    if(sum > n)
        cout<<sum-n<<endl;
    else
        cout<<0<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
