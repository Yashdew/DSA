#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    if(num >=1 && num<= 4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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
