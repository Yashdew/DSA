#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int mass,height;
        cin>>mass;
        cin>>height;

        int sum = mass/(pow(height,2));

        if(sum<=18)
        {
            cout<<1<<endl;
        }
        else if(sum>=19 && sum<=24)
        {
            cout<<2<<endl;
        }
        else if(sum>=25 && sum<=29)
        {
            cout<<3<<endl;
        }
        else if(sum>=30)
        {
            cout<<4<<endl;
        }
    }

    return 0;
}
