#include <iostream>
using namespace std;

int main() {

    double t,n[100];
    double sum;
    int i,j;
    cin>>t;
    if(t>=1 && t<=100)
    {
	    for(i=0;i<t;i++)
	    {
	        cin>>n[i];
	    }
	    for(i=0;i<t;i++)
	    {
	        sum=1;
	        for(j=n[i];j>0;j--)
	        {
	            sum=sum*j;
	        }
	        cout<<sum<<endl;
	    }
	}
    
        
    
	return 0;
}