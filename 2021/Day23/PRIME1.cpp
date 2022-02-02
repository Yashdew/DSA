#include <bits/stdc++.h>
#define MAX 1000000000
using namespace std;

long long int prime(long long int primeseries[MAX+1])
{
    primeseries[MAX+1]={1};
    primeseries[0]=0;
    primeseries[1]=0;

    for(long long i=2;i<=MAX;i++)
    {
        if(primeseries[i]==1)
        {
            for(long long j=i*i;j<=MAX;j=j+i)
            {
                if(primeseries[j]==1)
                {
                    primeseries[j]=0;
                }
            }
        }
    }

    return primeseries;
}
int main()
{  
    long long int primeseries[MAX+1]={1};
    primeseries=prime(primeseries);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int low,high;
        cin>>low,high;
        for(int i=low;i<=high;i++)
        {
            if(primeseries[i]==1)
            {
                cout<<i<<endl;
            }
        }
    }return 0;
}
