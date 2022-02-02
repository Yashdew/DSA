#include <iostream>
using namespace std;

int main() {
	
    long long int t,candy,sum,n,i=0;

    cin>>t;
    cout<<endl;
	while(t--)
    {
        cin>>n;
        sum=0;
        //candy = new long long int[n];
        for(i=0;i<n;i++)
        {
            
            cin>>candy;
            sum=(sum+candy)%n;
        }
        if(sum==0)
        {
            cout<<"YES"<<endl<<endl;
        }
        else
        {
            cout<<"NO"<<endl<<endl;
        }
    }
    return 0;
}