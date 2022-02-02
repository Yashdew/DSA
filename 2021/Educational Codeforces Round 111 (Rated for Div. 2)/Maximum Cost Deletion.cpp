#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num,a,b;
    cin>>num>>a>>b;
    string str;
    cin>>str;

    int sum = a*num;
    int count=0;
    if(b>0)
    {
        sum = sum + b*num;
    }
    else
    {
        for(int i=1;i<num;i++)
        {
            if(str[i]!=str[i-1])
                count++;
        }
        count++;
        sum = sum + b*((count/2)+1);
    }

    cout<<sum<<endl;
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
