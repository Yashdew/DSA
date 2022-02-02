#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int num=1,sum=0,count=0;
    while(num!=-1)
    {
        cin>>num;
        sum=sum+num;
        count++;
        sum=sum/count;
    }
    cout<<sum;
    cout<<-1;
	return 0;
}