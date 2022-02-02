#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        string strip;
        cin>>strip;
        long long int counter=0;
        if(strip[0]=='1')
        {
            counter=1;
        }
        for(long long int temp=1;temp<strip.length();temp++)
        {
            if(strip[temp]=='1')
            {
                if(strip[temp-1]=='0')
                {
                    counter++;
                }
            }
        }
        cout<<counter<<endl;
    }

    return 0;
}
