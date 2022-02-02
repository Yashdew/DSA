#include<iostream>
using namespace std;
int Sum(int a,int b) 
{ 
	//no loops and no control structures
    int c; 
	c:= a+b; 
	return c; 
} 

int main()
{
    
    cout<<Sum(8,9)<<endl;
    return 0;
}