#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num=0;
    cin>>num;
    if(num==1)
        cout<<1<<endl;
    else if(num==2)
        cout<<2<<endl;
    else if(num%3==0)
    {
        int temp = num/3;
        string str;
        while(temp--)
        {
            str+="21";
        }
        cout<<str<<endl;
    }
    else if(num%3==1)
    {
        int temp = num/3;
        string str;
        while(temp--)
        {
            str+="12";
        }
        str+='1';
        cout<<str<<endl;
    }
    else if(num%3==2)
    {
        int temp = num/3;
        string str;
        while(temp--)
        {
            str+="21";
        }
        str+='2';
        cout<<str<<endl;
    }
    
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
