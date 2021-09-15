#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int w1,w2,x1,x2,m;
        cin>>w1>>w2>>x1>>x2>>m;

        if(  x1*m <=  w2-w1 && w2-w1<=x2*m  )
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }

    return 0;
}
