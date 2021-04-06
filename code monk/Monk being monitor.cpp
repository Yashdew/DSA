#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int nums,maximum=INT_MIN,minimum=INT_MAX;
        cin>>nums;

        vector<long long int> array;
        //fill_n(array, 1000000, 0);

        for(long long int i=1;i<=nums;i++ )
        {
            long long int temp;
            cin>>temp;
            array.push_back(temp);
        }

        sort(array.begin(),array.end());

        long long int temp=0;
        for(int i=0;i<array.size()-1;i++)
        {

            if(i==0)
            {
                temp=1;
                if(array[i]==array[i+1])
                {
                    temp++;
                }
            }
            else
            {
                if(array[i]==array[i+1] )
                {
                    temp++;
                }
                else
                {
                    temp=1;
                }
            }
            minimum = min(minimum,temp);
            temp=0;
        }

        temp=0;
        for(int i=0;i<array.size()-1;i++)
        {
            if(i==0)
            {
                temp=1;
                if(array[i]==array[i+1])
                {
                    temp++;
                }
            }
            else
            {
                if(array[i]==array[i+1])
                {
                    temp++;
                }
                else
                {
                    temp=1;
                }
            }
            maximum = max(maximum,temp);
            
        }


        cout<<maximum-minimum<<endl;
    }

    return 0;
}
