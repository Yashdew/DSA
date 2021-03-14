#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        string str;
        cin>>str;
        long long int count=0;
        for(long long int i=1;i<str.length();i++)
        {
            if(str[i]=='1')
            {
                if(str[i-1]=='0')
                {
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
