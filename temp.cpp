#include <bits/stdc++.h>
using namespace std;
int solve(int num)
{
    if(num==0 || num==1)
        return -1;
    for(int i=2;i<num;i++)
    {
        if( num %i == 0 )
            return -1;
    }
    return 1;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int num;
        cin>>num;
        if(solve(num)==1)
            cout<<"prime";
        else
            cout<<"not prime";
        cout<<endl;
    }

    return 0;
}
