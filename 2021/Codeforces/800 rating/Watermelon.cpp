#include <iostream>
using namespace std;
int main()
{  
    int watermelon=0;
    cin>>watermelon;

    if(watermelon%2==1)
        cout<<"NO";
    else
    {
        if(watermelon>=4)
        {
            if( (watermelon - 2 )%2 ==0  )
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
        }
        else
        {
            cout<<"NO";
        }
    }
    return 0;
}
