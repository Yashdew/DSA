#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int acc[7],fore[7];
    
    for(int i=0;i<7;i++)
    {
        cin>>acc[i];
    }

    for(int j=0;j<7;j++)
    {
        cin>>fore[j];
    }
    int sum=0;
    for(int i=0;i<7;i++)
    {
        sum=sum+abs(acc[i]-fore[i]);
    }

    cout<<sum;
    return 0;
}
