#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        // for(int i=0;i<n;i++)
        // {
        //     cout<<arr[i];
        // }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;i<n;j++)
            {
                if(i==j)
                {
                    if(arr[i] % k !=0 && arr[j] % k !=0)
                    {
                        arr[i]=arr[i]+arr[j];
                        if(arr[i] % k == 0)
                        {
                            flag=flag+1;
                        }
                        else
                        {
                            flag=0;
                            break;   
                        }
                    }
                }
            }
        }

        if(flag>0)
        {
            cout<<"YES"<<endl;
        }
        if(flag==0)
        {
            cout<<"NO"<<endl;
        }
    }
}