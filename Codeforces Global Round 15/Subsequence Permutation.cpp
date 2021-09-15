#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int numLength;
    cin>>numLength;

    string str;
    cin>>str;

    vector<char> strArray;

    for(int i=0;i<str.length();i++)
    {
        strArray.push_back(str[i]);
    }

    sort(strArray.begin(),strArray.end());

    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(strArray[i]==str[i])
            count++;
    }

    cout<<numLength-count<<endl;
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
