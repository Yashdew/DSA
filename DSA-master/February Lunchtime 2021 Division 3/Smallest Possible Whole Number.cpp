#include <bits/stdc++.h>
using namespace std;
long long int eval(long long int N,long long int K)
{
    if(N>K)
    {
        N = eval(N-K,K);
    }
    return N;
}
int main()
{  
    long long int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int N, K;
        cin>>N>>K;
        if(N>K)
        {
            cout<<eval(N,K)<<endl;
        }
        else if(N==K)
        {
            cout<<0<<endl;
        }
        else if(N<K)
        {
            cout<<N<<endl;
        }
        
    }

    return 0;
}
