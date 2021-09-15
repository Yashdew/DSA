#include <iostream>
using namespace std;

int main() {
	
    int t;
    int num, digit;
    cin>>t;

    while(t--)
    {
        if(t!=-1)
        {
            cin>>num;
            cin>>digit;
            int sum=1;
            
            for(int i=0;i<=10;i++)
            {
                sum=sum+(i*num);
                cout<<sum<<endl;
            }
            //cout<<sum<<endl;
        }
        
    }
	return 0;
}