#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<long long> array;

    long long count1=0,count2=0;
    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;

        if(temp==1)
            count1++;
        else if(temp==2)
            count2++;
    }

    long long count = count1 *(num  - count1) + count1 * (count1 - 1) / 2 +  count2 * (count2 - 1) / 2; 
    cout<<count<<endl;
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
