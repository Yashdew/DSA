#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;

    vector<int> array;
    for(int i=0;i<str.length();i++){
        if( int(str[i])>=48 && int(str[i])<=57 )
        {
            int temp = int(str[i]) - 48;
            array.push_back(temp);
        }
    }

    sort(array.begin(),array.end());
    for(int i=0;i<array.size()-1;i++){
        cout<<array[i]<<"+";
    }
    cout<<array[array.size()-1]<<endl;
    
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
