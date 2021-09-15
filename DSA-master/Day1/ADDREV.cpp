#include <iostream>
using namespace std;
int reversenum(int num)
{
    int newnum=0;
    int sum=0;
    while(num!=0)
    {
        newnum=num%10;
        num=num/10;
        sum=(sum*10)+newnum;
    }
    num=sum;
    return num;
}

int main() {
	// your code goes here
	int n;
	int a,b;
    cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a>>b;
        cout<<reversenum(reversenum(a)+reversenum(b))<<endl;
	}
	
	return 0;
}