#include <iostream>
#include<math.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    if(t<=300)
    {
        while(t--)
        {
            long long int b,c,d;
            cin>>b;
            cin>>c;
            cin>>d;
            if(b<c && d<c && b>=0 && c>=0 && d<=pow(10,200))
            {
                cout<<(2*c)-d-b<<endl;
            }
        }
    }
    return 0;
}