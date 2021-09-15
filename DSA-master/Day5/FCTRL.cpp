#include <iostream>
using namespace std;

int main() {
	int t;
    int n;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        if(n>=1 && n<=1000000000)
        {
            int c=0;
            while(n>=5)
            {
                n=n/5;
                c=c+n;
            }
            cout<<c<<endl;
        }
    }
	return 0;
}