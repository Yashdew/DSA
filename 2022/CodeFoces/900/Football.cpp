#include <bits/stdc++.h>
using namespace std;
int solve()
{
    string str;
    cin>>str;

    int count=1;
    for(int i=0;i<str.length();i++)
    {
        if(count==7)
            return 1;
        
        if(str[i]!=str[i+1])
            count=0;
        
        count++;
    }
    if(count==7)
        return 1;
    return 0;

}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // int testCases;
    // cin >> testCases;
   
    // while (testCases--)
    // {
        if(solve())
            cout<<"YES";
        else
            cout<<"NO";
    // }

    return 0;
}
