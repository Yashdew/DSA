#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int nums;
        cin>>nums;
        vector<long long int> array;
        for(long long int i=0;i<nums;i++)
        {
            long long int temp;
            cin>>temp;
            array.push_back(temp);
        }

        vector<int> pairsum;
        for(int i=0;i<nums-1;i++)
        {
            for(int j=i+1;j<nums;j++)
            {
                int sum = array[i]*array[j] + max( (array[i]-array[j]),(array[j]-array[i]) );
                pairsum.push_back(sum);
            }
        }
        cout<<*max_element(pairsum.begin(),pairsum.end()); 
    }

    return 0;
}
