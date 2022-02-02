#include <bits/stdc++.h>
using namespace std;

bool ispalindrome(long long int num)
{
    long long int rev=0,temp=num;
    while(temp!=0)
    {
        rev = rev*10 + temp%10;
        temp = temp/10;
    }
    if(rev==num)
        return true;
    return false;
}
void solve()
{
    long long int num;
    cin>>num;
    while(1)
    {
        num++;
        if ( ispalindrome(num)==true )
        {
            cout<<num<<endl;
            break;
        }
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        solve();
    }

    return 0;
}
