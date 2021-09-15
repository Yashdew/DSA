#include <iostream>
using namespace std;
int coin(long long int n)
{
    int a=n/2,b=n/3,c=n/4;
    int sum=0;
    a=coin(a);
    b=coin(b);
    c=coin(c);
    sum=a+b+c;
    return sum;
}
int main() {
	// your code goes here
    long long int n;
    while(cin>>n)
    {
       if(n>=0 && n<=1000000000)
        {
           coin(n);
        }
    }
	return 0;
}