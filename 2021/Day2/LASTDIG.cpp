#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int t;

    long double a,b,c;
    cin>>t;
    if(t>0 && t<=30)
    {
        while(t--)
        {
            cin>>a;
            cin>>b;
            if(a>=0 && a<=20)
            {
                
                c = pow(a,b);
                int d = c%10;
                
            }
            else
            {
                return 0;
            }
            
                         
        }
    }
    
	return 0;
}