#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int num;
        cin>>num;
        long long int temp=0,even=0,odd=0;
        for(long long int i=0;i<num;i++)
        {
            cin>>temp;
            if(temp%2==0)
            {
                even=even+1;
            }
            else
            {
                odd=odd+1;
            }
        }
        if(odd%2 == 1)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}