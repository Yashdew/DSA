#include <iostream>
#include <cmath>
using namespace std;
int main()
{  
    long double n,m,a;
    cin>>n>>m>>a;
 
    //cout<<ceil(6/4);
    
    //cout<<float(m/a);
    long double var = ceil(n/a) * ceil(m/a);
    cout<< (long long int)var ;
    return 0;
}