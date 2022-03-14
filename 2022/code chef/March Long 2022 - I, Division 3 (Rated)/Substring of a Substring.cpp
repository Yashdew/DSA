#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;

    long long c=0,ans=0;
    for(long long i=1;i<str.length();i++){
        if(str[i]!=str[0] && str[i]!=str[str.length()-1]){
            c+=1;
        }
        else
            c=0;
        ans = max(ans,c);
    }
    if(ans==0)
        cout<<-1<<endl;
    else
        cout<<ans<<endl;
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
