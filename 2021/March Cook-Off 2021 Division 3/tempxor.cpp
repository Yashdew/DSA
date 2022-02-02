#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int array[9]={9,11};

        int sum=7;
        for(int i=0;i<2;i++)
        {
            sum^=i;
        }
        cout<<sum<<endl;
    }

    return 0;
}
