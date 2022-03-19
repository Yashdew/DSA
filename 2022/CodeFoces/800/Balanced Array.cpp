#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<long long> array;
    long long sum=0;
    for(long long i=2;i<=num;i=i+2){
        sum+=i;
        array.push_back(i);
    }
    for(long long i=1;i<num-1;i=i+2){
        sum-=i;
        array.push_back(i);
    }

    if(sum%2==1)
    {
        cout<<"YES"<<endl;
        array.push_back(sum);
        for(auto it:array)
            cout<<it<<" ";
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
            solve();
    }

    return 0;
}
