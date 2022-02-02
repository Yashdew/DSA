#include <bits/stdc++.h>
using namespace std;
int solve()
{
    long long int D,d,P,Q;
    cin>>D>>d>>P>>Q;
    if(P==Q)
    {
        int sum = D*P + d*Q;
        return sum;
    }
    else
    {
        int sum = D*P + pow(2,d)*Q;
        return sum;
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
        cout<<solve()<<endl;
    }

    return 0;
}
