#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int length, numofstar,count=0;;
        cin>>length>>numofstar;

        string str,star="*";
        cin>>str;

        // for(long long int i=1;i<numofstar;i++)
        // {
        //     star+="*";
        // }
        // long long int pos = str.find(star);

        long long int flag=0;
        for(long long int i=0;i<length;i++)
        {
            if(str[i]=='*')
            {
                count++;
                if(count==numofstar)
                {
                    flag=1;
                    break;
                }
                    
            }
            else
            {
                count=0;
            }
        }

        if(flag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
