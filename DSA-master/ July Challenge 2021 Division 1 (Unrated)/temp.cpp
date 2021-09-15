#include <bits/stdc++.h>
using namespace std;
#define Loop(z,n) for(long long int i=z;i<n;i++)
long long int originalArray[10]={0};
long long int forwardgcd[10]={0};
long long int backwardgcd[10]={0};


void GcdCalculation(long long int forwardgcd[],long long int backwardgcd[],long long int originalArray[], long long int n)
{
    forwardgcd[1]=originalArray[1];
    backwardgcd[n]=originalArray[n];
    for(long long int i=n-1;i>0;i--)
    {
        backwardgcd[i]=__gcd(backwardgcd[i+1],originalArray[i]);
    }
    Loop(2,n+1)
    {
        forwardgcd[i]=__gcd(forwardgcd[i-1],originalArray[i]);
    }
   
}
int main()
{
    // long long int t=0;
    // cin>>t;
    // while(t--)
    // {
        long long int n;
        cin>>n;
        
        Loop(1,n+1)
        {
            cin>>originalArray[i];
        }   
        sort(originalArray,originalArray+n+1);
        GcdCalculation(forwardgcd,backwardgcd,originalArray,n);       
        long long int SumOfElements=0;
        Loop(1,n+1)
        {
            SumOfElements+=originalArray[i];
        }
        long long int mimimumNotes=LLONG_MAX;
        Loop(1,n+1)
        {
            int X = forwardgcd[i-1];
            int Y = backwardgcd[i+1];
            int Z = __gcd(forwardgcd[i-1],backwardgcd[i+1]);
            long long int tempValue=(SumOfElements-originalArray[i]+__gcd(forwardgcd[i-1],backwardgcd[i+1]))/__gcd(forwardgcd[i-1],backwardgcd[i+1]);
            if(tempValue<mimimumNotes)
            mimimumNotes=tempValue;
        }
        cout<<mimimumNotes<<endl;
    // }
    // return 0;
}