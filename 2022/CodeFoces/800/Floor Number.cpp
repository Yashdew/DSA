#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long address,houseOnFloor;
    cin>>address>>houseOnFloor;

    if(address <= 2)
        cout<<1<<endl;
    else{
        long long count = ((address - 3) / houseOnFloor) + 2;
        cout<<count<<endl; 
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
