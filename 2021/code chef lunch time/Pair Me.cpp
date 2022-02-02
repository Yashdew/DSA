#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        int flag=0;
        cin>>a>>b>>c;
        if( a+b == c)
        {
            flag=1;
        }
        else if( b+c == a)
        {
            flag=1;
        }
        else if (c+a == b)
        {
            flag=1;
        }
        
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }
        else if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}