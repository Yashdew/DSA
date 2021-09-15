#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int nums;
        cin>>nums;
        vector <long long int> array; 
        for(long long int i=0;i<nums;i++)
        {
            long long int temp;
            cin>>temp;
            array.push_back(temp);
        }

        if( accumulate(array.begin(),array.end(),0) % 2 == 0 )
        {
            cout<<0<<endl;
        }
        else
        {
            sort(array.begin(),array.end());
            long long int count=0,flag=0;
            for(int i=0;i<array.size();i++)
            {
                if ( (array[i]%2 == 0  ) &&   ( (array[i] +1 )/2 - 1  <=0  )  )
                {
                    flag=1;
                    break;
                }
            }

            if(flag==1)
                cout<<1<<endl;
            else
                cout<<-1<<endl;
        }
    }

    return 0;
}
