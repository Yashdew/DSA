#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    char c;
    cin>>str>>c;

    for(int i=0;i<str.length();i++){
        if(str[i]==c && i%2==0 && (str.length()-i-1)%2==0){
            cout<<"YES"<<endl;
            return;
        }
            
    }
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
