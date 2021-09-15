#include <bits/stdc++.h>
using namespace std;
int solve()
{
    vector<int> array={2000,500,200,100,50,10,5,2,1};
    int num;
    cin>>num;
    int ans = 0;
    for(int i=0;i<array.size();i++)
    {
        ans += num/array[i];
        num -= num/array[i] * array[i];
    }
    cout<<ans<<endl;
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
