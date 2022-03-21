#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str1;
    string str2;
    cin>>str1>>str2;

    map<char,int> hashmapStr1;
    map<char,int> hashmapStr2;

    for(int i=0;i<str1.length();i++){
        hashmapStr1[str1[i]]++;
    }

    for(int i=0;i<str2.length();i++){
        hashmapStr2[str2[i]]++;
    }

    for(auto it:hashmapStr1){
        count = count + abs(it.second - hashmapStr2[it.first]);
    }
        
    return 
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
