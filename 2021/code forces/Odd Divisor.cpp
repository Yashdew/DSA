#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--)
    {
        long long int num;
        int flag=0;
        cin>>num;
        for(long long int i=2; i<=num;i=i+1)
        {
            if(num%i==0)
            {
                if( i%2!=0 && i>1)
                {
                    
                    flag=1;
                    break;
                }    
            }
        }  
        if(flag==1)
        {
            cout<<"YES"<<endl;
        }  
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}