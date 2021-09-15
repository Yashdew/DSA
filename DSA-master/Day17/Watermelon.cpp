#include <iostream>
using namespace std;

int main() {
    int num;
    cin>>num;
    if(num>=1 && num<=100)
    {
        if(num%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
	return 0;
}