#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int totalCandle, canMake;
    cin>>totalCandle>> canMake;

    int currentCandle = totalCandle,count=0,converted=0;
    while(currentCandle!=0)
    {
        count = count + currentCandle;
        converted = (totalCandle/canMake) + (totalCandle%canMake); 
        currentCandle = totalCandle/canMake;
        totalCandle =currentCandle + totalCandle%canMake;
    }
    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
