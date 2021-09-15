#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int U,V,A,S;
        cin>>U>>V>>A>>S;

        long long int LHS = pow(V,2);

        long long int RHS = pow(U,2);

        long long int MID = 2*A*S; 

        if(U<=V)
            cout<<"YES"<<endl;
        else
        {
            if ( RHS - LHS <= MID   )
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }

    return 0;
}
