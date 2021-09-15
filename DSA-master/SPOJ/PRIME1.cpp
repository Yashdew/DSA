#include <bits/stdc++.h>
using namespace std;

bool isprime(long long int num)
{
    if(num==0)
        return false;
    else if(num==1)
        return false;
    else if(num==2)
        return true;
    else if(num%2==0)
        return false;
    
    for(long long int i=3;i*i<=num;i=i+2)
    {
        if(num%i==0)
            return false;
    }
    return true;
}
void solve()
{
    long long int start,end;
    cin>>start>>end;

    for(long long int i=start;i<=end;i++)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
        }
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
