#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int num;
        cin>>num;
        long long int arr[num];
        for(long long int temp=0;temp<num;temp++)
        {
            cin>>arr[temp];
        }
        
        sort(arr,arr+num);
        int flag=0;
        int sum=0;
        for(int temp=0;temp<num;temp++)
        {
            if( temp+1 < arr[temp])
            {
                flag=1;   
                break;
            }
            else
            {
                sum+= temp+1 - arr[temp];
            }
        }
        if(flag==1)
        {
            
            cout<<"Second"<<endl;
        }
        else
        {
            if(sum%2==0)
            {
                //cout<<"First"<<endl;
                cout<<"Second"<<endl;
            }
            else
            {
                cout<<"First"<<endl;
                //cout<<"Second"<<endl;
            }
        }
        
    }

    return 0;
}
