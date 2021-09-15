#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    if(t>=1 && t<=3000)
    {
        while(t--)
        {
            int array[4] = {1,0,0,0};
            int num=0;
            cin>>num;
            if(num>=1 && num<=10000)
            {
                array[1] = array[0] + num;
                array[2] = array[1] + num;
                array[3] = array[2] * array[1];
                cout<<array[3]<<endl;
            }
            
        }
    }
    return 0;
}