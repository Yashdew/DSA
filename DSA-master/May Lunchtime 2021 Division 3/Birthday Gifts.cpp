#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int N,K;
    cin>>N>>K;

    vector<int> rate;
    for(int i=0;i<N;i++)
    {
        int temp;
        cin>>temp;
        rate.push_back(temp);
    }

    sort(rate.begin(),rate.end());
    int count1 = 0,count2=0,count=0;
    int sumA=0;
    int sumB=0;

    int temp=0;
    int flag;
    while(count2 < 2*K)
    {
        int temp = rate[rate.size()-1];
        rate.pop_back();
        if(count%2==0  && count1!=K)
        {
            sumA = sumA + temp;
            count1++;
        }
        else
        {
            sumB = sumB + temp;
            count2++;
        }
        count++;
    }

    if( count!= N-1 )
        sumB = sumB + rate[rate.size()-1];

    cout<<max(sumA,sumB)<<endl;
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
