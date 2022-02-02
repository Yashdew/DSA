#include <bits/stdc++.h>
using namespace std;
int main()
{  
    long long testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long num;
        cin>>num;

        vector<long long int> array;

        for(long long i=0;i<num;i++)
        {
            long long temp;
            cin>>temp;
            array.push_back(temp);
        }

        long long count=0;
        for(long long i=0;i<array.size()-1;i++)
        {
            for(long long j=i+1;j<array.size();j++)
            {
                if(i<j)
                {
                    if(array[i] > array[j])
                    {
                        count++;
                    }
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
