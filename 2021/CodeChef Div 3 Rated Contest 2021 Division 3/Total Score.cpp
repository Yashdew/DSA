#include <bits/stdc++.h>
using namespace std;
int convert(long long n) {
    int dec = 0, i = 0, rem;
    while (n != 0) {
        rem = n % 10;
        n /= 10;
        dec += rem * pow(2, i);
        ++i;
    }
    return dec;
}
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int N,K;
        cin>>N>>K;
        vector<int> array;
        vector<int> notsolve;
        for(int i=0;i<K;i++)
        {
            int temp;
            cin>>temp;
            array.push_back(temp);
        }
        for(int i=0;i<N;i++)
        {
            long long temp;
            cin>>temp;
            int dec = convert(temp); 
            notsolve.push_back(dec);
        }
        for(int i=0;i<notsolve.size();i++)
        {
            if(notsolve[i]==0)
            {
                cout<<0<<endl;
            }
            else
            {
                int sum=0;
                for(int j=0;j<array.size();j++)
                {
                    if(array.size()>1)
                    {
                        if( (notsolve[i]-1)==j)
                        {
                            sum=sum;
                        }
                        else
                        {
                            sum=sum+array[j];
                        }
                    }
                    else
                    {
                        if( notsolve[i]!=j)
                        {
                            sum=sum+array[j];
                        }
                    }
                }
                cout<<sum<<endl;
            }
        }
    }

    return 0;
}
