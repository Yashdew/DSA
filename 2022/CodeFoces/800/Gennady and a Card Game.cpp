#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;

    int num=5;
    vector<string> strArray;
    while(num--){
        string s;
        cin>>s;
        strArray.push_back(s);
    }

    for(int i=0;i<strArray.size();i++){
        if(str[0] == strArray[i][0]){
            cout<<"YES"<<endl;
            return;
        }

        if(str[1] == strArray[i][1]){
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
    solve();
    
    return 0;
}
