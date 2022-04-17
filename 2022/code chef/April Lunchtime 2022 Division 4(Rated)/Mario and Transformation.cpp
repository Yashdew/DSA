#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    //small
    //normal
    //huge

    if(num%3==0)
        cout<<"NORMAL"<<endl;
    else{
        if(num%3==1)
            cout<<"HUGE"<<endl;
        else
            cout<<"SMALL"<<endl;
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
