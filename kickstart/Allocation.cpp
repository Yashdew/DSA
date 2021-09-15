#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
    int j=0;
    while (j<testCases)
    {
        long long int N,B;
        vector<long long int> A;
        cin>>N>>B;

        for(long long int i=0;i<N;i++)
        {
            long long int temp;
            cin>>temp;
            A.push_back(temp);
        }
        sort(A.begin(),A.end());

        long long int sum=0,count=0;
        for(int i=0;i<A.size();i++)
        {
            sum+=A[i];
            
            if(sum<=B)
            {
                count++;
            }
            else
            {
                break;
            }
        }

        cout<<"Case #"<<j+1<<": "<<count<<endl;

        j++;
    }

    return 0;
}
