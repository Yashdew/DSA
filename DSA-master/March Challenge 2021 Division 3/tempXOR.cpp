#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int a,b;
        cin>>a>>b;
        int c = a ^ b;
        cout<<c; 
    }

    return 0;
}
