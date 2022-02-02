#include <bits/stdc++.h>
using namespace std;

long long int M = 1000000007;
long long int CHEFORA[100001] = {0};
long long int prefix[100001] = {0};

long long int expoPower(long long int res,long long int base,long long int power)
{
    while(power!=0)
    {
        if(power%2==0)
        {
            //base = (base*base)%M;
            base = ((base%M) * (base%M)) % M;
            power = power/2;
        }
        else
        {
            //res = (res*base)%M;
            res = ((res%M) * (base%M)) % M;
            power = power-1;
        }
    }
    return res;
}

long long int cheforaFunction(long long int i)
{
    long long int chefnum = i;
    long long int retnum = 0;
    if(i < 10)
        retnum = i;
    else if(i >= 10)
    {
        i = i/10;
        while(i!=0)
        {
            chefnum = chefnum*10 + i%10;
            i = i/10; 
        }
        retnum = chefnum;
    }
    return retnum;
}

void solve()
{
    long long int L,R;

    cin>>L>>R;

    long long int base = CHEFORA[L];
    long long int power = prefix[R] - prefix[L];

    long long int product = expoPower((long long int)1,(long long int) base,(long long int) power);
    cout<<product<<endl;
}


int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    for(long long int i=1;i<=100001;i++)
    {
        CHEFORA[i] = cheforaFunction(i);
        prefix[i] = prefix[i-1] + CHEFORA[i];
    }
    
    //cout<<CHEFORA[99998]<<endl;
    long long int testCases;
    cin >> testCases;
    while (testCases--)
    {
        solve();
    }
    return 0;
}
