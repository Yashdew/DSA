#include <iostream>
using namespace std;

int main() {
	
    while(1)
    {
        int n;
        cin>>n;
        if(n>0 && n<20000)
        {
            if(n%2!=0)
            {
                cout<<n/2<<endl;
            }
        }
        else 
        {
            return 0;
        }
        
    }
	return 0;
}