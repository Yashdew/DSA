#include <iostream>
using namespace std;

int main() {
    int num;

    while(1)
    {
        cin>>num;
        if(num!=0)
        {
            num=num+1;
            cout<<((3*num*num)-num)/2<<endl;
        }
        else 
            return 0;
    }
	return 0;
}