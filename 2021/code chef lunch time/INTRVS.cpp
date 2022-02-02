#include<iostream>
#include <cmath> 
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num;
        int limit;
        cin>>num>>limit;

        int arr[num];
        for(int i=0;i<num;i++)
        {
            cin>>arr[i];
        }
        int rejected=0,bot=0,result=1; 
        for(int i=0;i<num;i++)
        {
            if(arr[i]>-1)
            {
                if(arr[i]==1 || arr[i]==0)
                {
                    bot=bot+1;
                }
                if(arr[i] > limit)
                {
                    result=0;
                }
            }
            else
            {
                rejected++;
            }
        }

        if(rejected > ceil(num/2))
        {
            cout<<"Rejected"<<endl;
        }
        else if(result == 0 )
        {
            cout<<"Too Slow"<<endl;
        }
        else if(bot == num)
        {
            cout<<"Bot"<<endl;
        }
        else 
        {
            cout<<"Accepted"<<endl;
        }
    }
}