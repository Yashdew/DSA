#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int N,M;
        cin>>N>>M;
        
        long long int array[N]={-1};
        fill_n(array, N, -1);
       
        for(long long int i=0;i<N;i++)
        {
            long long int temp;
            cin>>temp;
            array[temp-1]=temp;
        }

        

        if(array.size() * (array.size() + 1) / 2 - sum == 0)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
        //cout<<array.size() * (array.size() + 1) / 2 - sum<<" ";
    }

    return 0;
}
