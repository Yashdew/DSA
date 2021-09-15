#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> array{2000,500,200,100,50,20,10,5,2,1};
    int coin;
    cin>>coin;
    int i=0;
    int count=0;
    while(i<array.size() && coin>0)
    {
        if(coin >= array[i] )
        {
            coin=coin-array[i];
            count++;
        }

        else
        {
            i++;
        }
    }
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
