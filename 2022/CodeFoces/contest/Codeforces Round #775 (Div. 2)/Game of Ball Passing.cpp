#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    vector<int> array;
    long long maximum=INT_MIN;
    long long sum=0;
    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;
        sum+=temp;

        maximum=max(temp,maximum);
    }

    sum-=maximum;

    if(sum==0 && maximum==0){
        cout<<0<<endl;
        return;
    }
    if(sum >= maximum)
        cout<<1<<endl;
    else
        cout<<maximum-sum<<endl;
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
