#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    if(num%4==0)
        cout<<"Good"<<endl;
    else
        cout<<"Not Good"<<endl;
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
