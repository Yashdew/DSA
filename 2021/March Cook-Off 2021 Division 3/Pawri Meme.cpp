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

        long long int i=0;
        if(str.length()>=5)
        {
            while(i < str.length()-5)
            {
                if(str[i]=='p' && str[i+1]=='a' && str[i+2]=='r' && str[i+3]=='t' && str[i+4]=='y' )
                {
                    str[i+2]='w';
                    str[i+3]='r';
                    str[i+4]='i';
                }
                i++;
            }
        }

        cout<<str<<endl;
        
    }

    return 0;
}
