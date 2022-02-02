#include <bits/stdc++.h>
using namespace std;
int isVowel(char x)
{
    if(x =='a' || x =='e' || x =='i' || x=='o' || x=='u' || x=='y'|| x=='Y' || x =='A' || x =='E' || x =='I' || x=='O' || x=='U')
        return 1;
    return 0;
}
void solve()
{
    string str;
    cin>>str;

    string newStr;
    for(int i=0;i<str.length();i++)
    {
        if(!isVowel(str[i]))
            newStr = newStr + str[i];
    }
    str="";
    for(int i=0;i<newStr.length();i++)
    {
        str = str + '.' + newStr[i];
    }

    for(int i=0;i<str.length();i++)
    {
        if( int(str[i]) >= 65 && int(str[i])<=90)
        {
            str[i] = char(int(str[i]) + 32);
        }
    }

    cout<<str<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // int testCases;
    // cin >> testCases;
   
    solve();
    
    return 0;
}
