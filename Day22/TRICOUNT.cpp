#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long unsigned int level,sum=0;

        cin>>level;

        sum = (level*(level+2)*(level+level+1))/8;
        cout<<sum<<endl;
    }

    return 0;
}
