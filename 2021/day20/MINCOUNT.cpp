#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int h;
        cin>>h;
        if(h>0)
        {
            long long int X = (h* (h+1))/6;
            cout<<X<<endl;
        }
        else
            cout<<0<<endl;
    }

    return 0;
}
