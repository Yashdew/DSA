#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        int a[N];
        for(int i=0;i<N;i++)
        {
            cin>>a[i];
        }

        int even=0,odd=0;
        for(int i=0;i<N;i++)
        {
            if(a[i]%2==0)
            {
                even+=1;
            }
            else
            {
                odd+=1;
            }
        }

        cout<<min(even, odd)<<endl;
    }
    return 0;
}