#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    if(t<=100 && t>0)
    {
        while(t--)
        {
            int n,k,upper,lower;
            cin>>n;
            cin>>k;
            if(n>=1 && k>=1 && n<=1000000 && k<=1000000)
            {
                upper=1,lower=1;
                for(int i=n-1;i>=n-k+1;i--)
                {
                    upper=upper*i;
                    //cout<<upper<<endl;
                }
                for(int i=k-1;i>=1;i--)
                {
                    lower=lower*i;
                    cout<<lower<<endl;
                }
                // if(upper!=0 || lower!=0)
                // {
                //     cout<<upper/lower<<endl;
                // }
                // else
                //     cout<<1<<endl;
            }
        }
    }
	return 0;
}