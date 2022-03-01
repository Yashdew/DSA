#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long task;
    cin>>task;

    vector<long long> array;
    long long sum=0;
    for(long long i=0;i<task;i++){
        long long temp;
        cin>>temp;
        sum+=temp;
        array.push_back(temp);
    }
    
    long long avg = sum;
    long long maximum = 0;
    vector<pair<long long,long long>> pairArray;
    for(long long i=0;i<task;i++){
         maximum+=array[i];
         pairArray.push_back({maximum,avg-maximum});
    }
    
    sort(pairArray.begin(),pairArray.end(),[&](pair<long long,long long>&a,pair<long long,long long>&b){
        return  abs(a.first-a.second) < abs(b.first-b.second);
    });

    if(pairArray[0].second > pairArray[0].first)
        cout<<pairArray[0].second<<endl;
    else
        cout<<pairArray[0].first<<endl;
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
