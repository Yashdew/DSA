#include <bits/stdc++.h>
using namespace std;
//#define'int long long 

 
void solve()
{
    long long int num,q;
    cin>>num>>q;

    vector<long long int> array(num+1,0);

    for(long long int i=1;i<=num;i++)
    {
        long long int temp;
        cin>>temp;
        if(temp%2==0)
        {
            array[i]=array[i-1]+1;
        }
        else
        {
            array[i]=array[i-1];
        }
    }
 
    while(q--)
    {
        long long int L,R;
        cin>>L>>R;

        long long int counteven = array[R] - array[L-1];
        long long int countodd = (R-L+1) - counteven;

        long long int odd = ((countodd*(countodd-1))/2 ) *counteven;
        long long int even = ( counteven * (counteven-1) * (counteven - 2) )/6;

        long long int sum = odd + even;

        cout<<sum<<endl; 
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        solve();
    }

    return 0;
}
