#include <bits/stdc++.h>
using namespace std;
#define MAX 1000000007
int solve()
{
    long long int n,m;
    cin>>n>>m;
    long long int sum = (pow(2,n)) % MAX; 
    sum = sum - 1;  
    sum = ( pow(sum,m) ) % MAX; 
    return sum % MAX;
}
int main()
 {  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        cout<<solve()<<endl;
    }

    return 0;
}
