#include <bits/stdc++.h>
using namespace std;
long long int minll(long long int a, long long int b)
{
    if(a>b)
        return b;
    else
        return a;
}
long long int maxll(long long int a, long long int b)
{
    if(a>b)
        return a;
    else
        return b;
}
long long int collegelife(long long int num,long long int egg,long long int bar,long long int A,long long int B,long long int C)
{
    long long int ans = INT_MAX;
    if(num==0)
    {
        return 0;
    }
    if( egg >= 2*num)
    {
        ans =  minll(ans,A*num);
    }
    
    if( bar >= 3*num)
    {
        ans = minll(ans,B*num);
    }
    
    if(bar>=num && egg>=num)
    {
        ans = minll(ans,C*num);
    }
    if( ((bar-num)/2) >=1 && ((bar-num)/2 ) >= (num-egg) )
    {
        if(B - C < 0)
        {
            long long int temp = minll( num-1 , (bar - num)/2 );
            ans = minll(ans, (B-C) * temp + num*C);
        }
        else
        {
            long long int temp = maxll( 1 , num - egg);
            ans = minll(ans, (B-C) * temp + num*C);
        }
    }
    if( egg/2 >=1 && egg/2 >= ( (3*num) -bar +2 )/3 ) //+2
    {
        if(A - B < 0)
        {
            long long int temp = minll( num-1 , egg/2 );
            ans = minll(ans, (A-B)*temp  + num*B);
        }
        else
        {
           long long int temp = maxll( 1, ((3*num) -bar +2)/3 );  //2
           ans = minll(ans, (A-B)*temp  + num*B); 
        }
    }
    if( egg-num >=1 && egg+bar >= 2 * num )
    {
        if(A - C < 0)
        {
            long long int temp = minll( num-1 , egg - num );
            ans = minll(ans, (A-C)*temp + num*C);
        }
        else
        {
            long long int temp = maxll( 1 ,  num - bar );
            ans = minll(ans, (A-C)*temp  + num*C); 
        }
    }
    if(egg>=3 && bar>=4  && num>=4)
    {
        ans = minll(ans, A + B + C + collegelife(num-3,egg-3,bar-4,A,B,C));
    }
    return ans;
}
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        
        long long int numOfPerson;
        cin>>numOfPerson;
        
        long long int egg,bar;
        cin>>egg>>bar;
        
        long long int Rateomelette,Ratemilkshake,Ratecake;
        cin>>Rateomelette>>Ratemilkshake>>Ratecake;

        long long int ans = collegelife(numOfPerson,egg,bar,Rateomelette,Ratemilkshake,Ratecake);

        if(ans==INT_MAX)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
        
    }

    return 0;
}
