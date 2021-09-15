#include <bits/stdc++.h>
using namespace std;
int main()
{  
    long long int num;
    cin>>num;
    char str[num];
    for(long long int i=0;i<num;i++)
    {
        cin>>str[i];
    }

    for(long long int i=0;i<num;i++)
    {
        if(i==0)
            cout<<"0"<<endl;
        else
        {
            long long int j=i-1;
            long long int count=0;
            while(j>=0)
            {
                if( int(str[j]) < int(str[i]) )
                {
                    count++;
                }
                j--;
            }
            cout<<count<<endl;
        }
    }

    return 0;
}
