#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;
    
    string optionString1, optionString2;
    if(str[0]=='-' && str.length()==3)
    {
        optionString1 = optionString2 = str[0];
        
        optionString1 += str[2];
        optionString2+=str[1];

        if(optionString1 == "-0")
            optionString1 = "0";
        
        if(optionString2 == "-0")
            optionString2 = "0";
    }
    else
    {
        optionString1 = str;
        optionString1.erase(optionString1.end()-1);
        optionString2 = str;
        optionString2.erase(optionString2.end()-2);
    }

    if( stoi(str) > stoi(optionString1) && stoi(str) > stoi(optionString2) )
        cout<<str;
    else if( stoi(optionString1) > stoi(str)   &&  stoi(optionString1) > stoi(optionString2) )
        cout<<optionString1;
    else
        cout<<optionString2;

}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
