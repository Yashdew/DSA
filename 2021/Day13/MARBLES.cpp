#include <iostream>
using namespace std;

long long int NcR(long long int n,long long int k)
{
    if(k>n-k) k=n-k;
    long long int ans=1;
    for(long long int i=0;i<k;i++)
    {
        ans=ans*(n-i)/(i+1);
    }
    return ans;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    if(t<=100 && t>0)
    {
        while(t--)
        {
            long long int n,k;
            cin>>n;
            cin>>k;
            cout<<NcR(n-1,k-1)<<endl;
        }
    }
	return 0;
}