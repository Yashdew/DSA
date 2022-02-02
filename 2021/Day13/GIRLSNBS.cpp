#include<bits/stdc++.h>
using namespace std;

int main() {
    while(1)
    {
        
        int g,b;
        cin>>g>>b;
        if(g==-1 || b==-1)
        {
            return 0;
        }
        else if(0 <= g && 0 <= b && b <= 1000 && g <= 1000 )
        {
            if(b==g)
            {
                if(b==0)
                {
                    cout<<"0"<<endl;
                }
                else
                {
                    cout<<1<<endl;
                }
            }
            else if(b>g)
            {
               cout<< (b+g)/(g+1) <<endl;
            }
            else if(b<g)
            {
               cout<< (b+g)/(b+1) <<endl;
            }
        }
        
    }
}