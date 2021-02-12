#include <bits/stdc++.h>

using namespace std;
int main()
{
    int test;
    cin>>test;
    if(test>=1 && test<=1000)
    {
        while(test>0)
        {
            double r;
            int t=1;
            cin>>r;
            if(r>=1 && r<=pow(10,7))
            {
                cout<<fixed << setprecision(2) <<"Case "<<t++<<": "<<((4*r*r)+0.25)<<endl;
            }
            test--;
        }
    }
    return 0;
}