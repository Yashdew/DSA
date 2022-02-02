#include <bits/stdc++.h>
using namespace std;
int solve()
{
    string str;
    cin>>str;
    string strNew;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=str[i+1])
            strNew+=str[i];
    }

    int i=0,j=0;
    string str1 = "helo";
    string strFinal;
    while(i<strNew.length() || j<str1.length())
    {
        if(str1[j]==strNew[i])
        {
            j++;
            strFinal+=strNew[i];
        }   
        if(strFinal == "helo")
            return 1; 
        i++;
    }
    return 0;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    if(solve())
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
