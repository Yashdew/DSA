#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    if(num >= 1900)
        cout<<"Division 1"<<endl;
    else if(num >= 1600 && num <= 1899)
        cout<<"Division 2"<<endl;
    else if(num >= 1400 && num <= 1599)
        cout<<"Division 3"<<endl;
    else
        cout<<"Division 4"<<endl;
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
