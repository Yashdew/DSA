#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int num;
    cin>>num;
    if(num>=1 && num<=pow(10,4))
    {
        int sum=0;
        for(int i=1;i<=sqrt(num);i++)
        {
            sum+=(num/i)-i+1;
        }
        cout<<sum<<endl;
    }
	return 0;
}