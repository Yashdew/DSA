#include <bits/stdc++.h>
using namespace std;
int main()
{  
    long long int testCases;
    cin >> testCases;
    
    while (testCases--)
    {
        vector<long long int> array;
        long long int C;
        cin>>C;
        long long int D = ceil(sqrt(C));
        for(long long int i=1;i<pow(2,D);i++)
        {
            for(long long int j=1;j<pow(2,D);j++)
            {
                long long int XOR = i^j;
                //cout<<XOR<<" "<<i<<" "<<j<<endl;
                if( XOR == C )
                {
                    //cout<<i<<" "<<j<<" "<<i*j<<endl;
                    array.push_back(i*j);
                }
            }
        }   
        if(array.size()>0)
        {
            cout<<*max_element(array.begin(),array.end())<<endl;
        }
        else
            cout<<0<<endl;
         
    }

    return 0;
}
