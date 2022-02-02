#include <iostream>
using namespace std;

int main() {
    int t;
	while(cin>>t)
	{
        if(t>=3)
        {
            int sum=0;
            for(int i=1;i<=t;i++)
            {
                sum = sum + i*3;
            }
            cout<<sum-3;
        }
    }
    return 0;
}