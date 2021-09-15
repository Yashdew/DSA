#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int N,M,K;
        cin>>N>>M>>K;

        long long int lowerlimit = K+1+1;
        long long int upperlimit = K+N+M;
        long long int midlimit = (lowerlimit+upperlimit)/2;
        
        long long int sum=lowerlimit;
        long long int count=2;
        for(long long int i=lowerlimit+1;i<=midlimit;i++)
        {
            long long int j=0,temp=0;
            while(j<count)
            {
                temp^=i;
                j++;
            }
            sum^=temp;
            if( count < min(N,M))
                count++;
            else
                break;
        }     
        cout<<count<<endl;
        count--;
        for(long long int i=midlimit+1;i<upperlimit;i++)
        {
            if(count==1)
                break;
            long long int j=0,temp=0;
            while(j<count)
            {
                temp^=i;
                j++;
            }
            sum^=temp;
            count--;
            
        }     
        cout<<count<<endl;
        sum=sum^upperlimit;
        cout<<sum<<endl;
    }

    return 0;
}
