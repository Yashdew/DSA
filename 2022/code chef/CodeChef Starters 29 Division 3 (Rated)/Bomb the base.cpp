#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num,target;

    cin>>num>>target;
    vector<long long> arrayHouse;

    while(num--){
        long long temp;
        cin>>temp;

        arrayHouse.push_back(temp);
    }

    for(long long i=arrayHouse.size()-1;i>=0;i--){
        if(arrayHouse[i] < target){
            cout<<i+1<<endl;
            return;
        }
    }

    cout<<0<<endl;
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
