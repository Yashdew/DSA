#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    
    if(n%3==0)
    {
        cout<<n/3<<" "<<n/3<<endl;
    }
    else if(n%3==2)
    {
        cout<< (n/3) <<" "<< (n/3) +1 <<endl;
    }
    else if(n%3==1)
    {
        cout<< (n/3) +1 <<" "<< (n/3) <<endl;
    }

}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        solve();
    }

    return 0;
}
