#include<iostream>
#include<math.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    if(t>=1 && t<=pow(10,4))
    {
         while(t--)
        {
            int w,h,k;
            cin>>w>>h>>k;
            if( w>=1 && w<=pow(10,4) && h>=1 && h<=pow(10,4) && k>=1 && k<=pow(10,9))
            {
                if(w%2==0 || h%2==0)
                {
                    cout<<"YES"<<endl;
                }
                else
                {
                    if(k==1)
                    {
                        cout<<"YES"<<endl;
                    }
                    else
                    {
                        cout<<"NO"<<endl;
                    }
                    
                }
                
            }
        }
    }
    return 0;
}