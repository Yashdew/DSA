#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x,d=0;
    cin>>x;
    int a =x%10;

    string s=to_string(x);
    for(int i=0;i<s.size();i++)
    {
        d+=1+i;
    }


    cout<<((a-1)*10)+d<<endl;
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
