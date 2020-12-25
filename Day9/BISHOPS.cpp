#include <iostream>
using namespace std;

int main() {
	
    long long int n;
	while(cin>>n)
	{
        
        if(n>=1 && n<=10000)
        {
            if(n!=1)
            {
                cout<<(n*2)-2<<endl;
            }
            else
            {
                cout<<n;
            }
        }
	}
	return 0;
}