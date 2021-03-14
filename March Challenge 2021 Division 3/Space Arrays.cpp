#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int nums;
        vector<long long int> array;
        vector<long long int> permutation;
        cin>>nums;

        for(long long int i=0;i<nums;i++)
        {
            long long int temp;
            cin>>temp;

            array.push_back(temp);
        }
        
        sort(array.begin(),array.end());
        int flag=0;
        int sum=0;
        for(int i=0;i<array.size();i++)
        {
            if( i+1 > array[i])
            {
                flag=1;   
                break;
            }
            else
            {
                sum+= i+1 - array[i] 
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
                cout<<"Second"<<endl;
            }
            else
            {
                cout<<"First"<<endl;
            }
        }
        
    }

    return 0;
}
