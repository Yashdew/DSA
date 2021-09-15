#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int upper=0,lower=0,num=0,special=0;
        char S[20];
        cin>>S;
        int flag=0;
        if( strlen(S) >=10 )
        {
            for( int i=0;i<strlen(S);i++)
            {
                if( isdigit(S[i]) )
                {
                    if (i != strlen(S) - 1 && i != 0)
                    {
                        num=1;
                    }
                }
                if(isupper(S[i]))
                {
                    if (i != strlen(S) - 1 && i != 0)
                    {
                        upper=1;
                    }
                    
                }
                if(islower(S[i]))
                {
                    lower=1;
                }
                if(S[i]=='@' || S[i]== '#'|| S[i]== '%'|| S[i]== '&'|| S[i]== '?')
                {
                    if ( i != strlen(S) - 1 && i != 0 ) 
                    {
                        special = 1;
                    }
            
                }
                    
            }
            if (upper==1 && lower==1 && num==1 && special==1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
                cout<<"NO"<<endl;
        }
        
    }
    return 0;
}