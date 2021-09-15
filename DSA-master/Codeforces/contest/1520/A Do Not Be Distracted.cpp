#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int length;
        string str;
        cin>>length;
        cin>>str;

        int flag=1;
        for(int i=0;i<str.length()-1;i++)
        {
            for(int j=i+1;j<str.length();j++)
            {
                if(str[i]==str[j])
                {
                    if(str[j]!=str[j-1])
                    {
                        cout<<"NO"<<endl;;
                        flag=0;
                        break;
                    }
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag==1)
            cout<<"YES"<<endl;
    }

    return 0;
}
