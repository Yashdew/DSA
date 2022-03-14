#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string S,T;
    cin>>S>>T;

    string M;
    for(int i=0;i<5;i++)
    {
        if(S[i]==T[i])
            M+='G';
        else
            M+='B';
    }

    cout<<M<<endl;
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
