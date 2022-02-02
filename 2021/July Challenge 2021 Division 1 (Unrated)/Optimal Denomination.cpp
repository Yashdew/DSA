#include <bits/stdc++.h>
using namespace std;

const long long int N=1e6;

long long int arrayMain[N];
long long int forwardArray[N];
long long int backwardArray[N];

long long int gcd(long long int a,long long int b)
{
    if(b==0) 
        return a;
    a%=b;
        return gcd(b,a);
}
using namespace std;
void solve()
{
    
    long long int num;
    cin>>num;
    // long long int array[N]={0};
    // long long int forwardArray[N]={0};
    // long long int backwardArray[N]={0};
    long long int sumArray = 0;
    for(long long int i=1;i<num+1;i++)
    {
        long long int temp;
        cin>>temp;
        sumArray+=temp;
        arrayMain[i]=temp;
    }
    sort(arrayMain,arrayMain+num+1);


    forwardArray[1]=arrayMain[1];
    backwardArray[num]=arrayMain[num];
    
    for(long long int i=2;i<num+1;i++)
    {
        forwardArray[i] = __gcd(forwardArray[i-1],arrayMain[i]);
    }
    for(long long int i=num-1;i>0;i--)
    {
        backwardArray[i] = __gcd(backwardArray[i+1],arrayMain[i]);
    }

    long long int count=LLONG_MAX;
    long long int sum=0;
    for(long long int i=1;i<num+1;i++)
    {
        // long long int X = forwardArray[i-1];
        // long long int Y = backwardArray[i+1];
        // long long int Z = __gcd(forwardArray[i-1],backwardArray[i+1]);
        //int A = array[i];
        sum = (sumArray - arrayMain[i] + __gcd(forwardArray[i-1],backwardArray[i+1])) /__gcd(forwardArray[i-1],backwardArray[i+1]);
        
        if(sum < count )
        {
            count = sum;
        }
    }

    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    long long int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        solve();
    }

    return 0;
}
