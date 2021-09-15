#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int X, R, M;
        cin>>X>>R>>M;
        R*=60;
        M*=60;
        if( X < R)
        {
            if ( X + 2*(R-X) > M )
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
        else
        {
            if(R>M)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
        }
    }

    return 0;
}
