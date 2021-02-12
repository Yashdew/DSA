#include <bits/stdc++.h>
using namespace std;

void EIGHTS(int num)
{
    if(num>0)
    {
        EIGHTS(num-1);
        if( 192 + ( (num-1)*250) < pow(2,63) )
        {
            cout<< 192 + ( (num-1)*250)<<endl;
        }
    }   
}
int main() {
	
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        EIGHTS(num);
    }
	return 0;
}