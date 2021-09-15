#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int essence;
        cin>>essence;
        if( essence > 100-essence )
        {
            if(essence==100)
            {
                cout<<1<<endl;
                break;
            }
            if( essence%(100-essence)==0 )
                cout<< (essence/(100-essence))+1<<endl;
            else
                cout<< 100<<endl;
        }
        else if((100-essence) > essence)
        {
            if( (100-essence)%essence==0 )
                cout<< ((100-essence)%essence)+1<<endl;
            else
                cout<< 100<<endl;
        }
        else
        {
            cout<<2<<endl;
        }
    }

    return 0;
}
