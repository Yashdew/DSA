#include <iostream>
#include<algorithm>
using namespace std;

int coin(int n)
{
    if(n==0)
        return 0;
    else

        coin(max())
    else
        return max(n,( (n/2) + (n/3) + (n/4) ));

}
int main() {
	// your code goes here
    int n;
    while(cin>>n)
    {
        cout<<coin(n);
    }
	return 0;
}