#include <iostream>
#include <math.h>
using namespace std;
int main() 
{
    // your code goes here
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        for(int i=m;i<=n;i++)
        {
            int h=0;
            for(int j=2; j<= sqrt(i);j++)
            {
                if(i%j==0)
                {
                    h++;
                    break;
                }
            }           
            if(h==0)
            if(i!=1)
            cout<<i<<endl;
        }
        cout<<endl;
    }
    return 0;
}
