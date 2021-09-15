#include <bits/stdc++.h>
using namespace std;
int main()
{  
    long long int R,O,C;
    cin>>R>>O>>C;

    long long int numBall = (20-O)*6;
    long long int maxRun  = numBall*6;
    long long int totalRun = C + maxRun;
    if( totalRun > R )
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
