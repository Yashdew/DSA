#include <bits/stdc++.h>
using namespace std;

int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int A,Y,X;
        cin>>A>>Y>>X;

        if( Y>A )
        {
            cout<<X*A +1<<endl;
        }
        else if(Y<=A)
        {
            cout<<X*Y <<endl;
        }
        
    }

    return 0;
}
