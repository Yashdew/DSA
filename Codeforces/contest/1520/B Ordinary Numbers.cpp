#include <iostream>
using namespace std;
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long int n,count=0,flag=0;
	    cin>>n;
	    for(long long int i=1;i<=n;i++)
	    {
	        if(i<10)
	            count++;
	        else
	        {
	            if(i%11==0)
	            {
	                count++;
	            }
	             flag=1;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}