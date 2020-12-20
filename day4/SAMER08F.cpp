#include <iostream>
using namespace std;

int main() {
    int input=1;
    int sum=0;
    while(input!=0)
    {
        cin>>input;
        if(input>=1 && input<=100)
        {
            sum=0;
            for(int i=input;i>0;i--)
            {
                sum=sum+(i*i);
            }
            cout<<sum<<endl;
        }
        
    }
	return 0;
}