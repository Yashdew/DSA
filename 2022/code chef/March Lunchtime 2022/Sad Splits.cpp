#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;
    string st = to_string(num);

    int count=0;
    for(int i=0;i<st.length();i++){
        if( int(st[i]-'0')%2==0)
            count++;
    }

    if(count>=2)
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
