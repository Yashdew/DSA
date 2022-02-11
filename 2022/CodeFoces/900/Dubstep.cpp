#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;

    string checkStr = "WUB";
    string finalStr;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]==checkStr[0])
        {
            if(str[i+1]==checkStr[1])
            {
                if(str[i+2]==checkStr[2])
                {
                    str[i]=str[i+1]=str[i+2]='1';
                }
            }
        }
    } 

    int flag=1;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='1')
        {
            finalStr = finalStr + str[i];
            flag=0;
        }
        else 
        {   
            if(finalStr.length()>0 && flag==0)
            {
                finalStr = finalStr + ' ';
                flag=1;
            }
                
        }
    } 

    cout<<finalStr<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    
    return 0;
}
