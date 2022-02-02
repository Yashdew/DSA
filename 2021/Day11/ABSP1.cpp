#include<bits/stdc++.h>
//#define MAX 100
using namespace std;

int main() {

    int t,n;
    long long int temp;
    long long int sum;
    vector<long long int> array;

    cin>>t;
    if(t>=1 && t<=1000)
    {
        while(t--)
        {
            cin>>n;
            array.clear();
            if(n>=1 && n<=10000)
            {
                for(int i=0;i<n;i++)
                {
                    cin>>temp;
                    array.push_back(temp);
                }
            }
            sort(array.begin(),array.end());
            sum=0;
            for(int i=n-1;i>=0;i--)
            {
                sum= sum+ (i*array[i]) - array[i]*(n-1-i);
            }
            cout<<sum<<endl;
        }     
    }
    
    return 0;
}