#include <bits/stdc++.h>
using namespace std;
void solve()
{
    float num;
    cin>>num;

    float sum = pow(0.143*num,num);

    if( sum - floor(sum) < 0.5)
        cout<<floor(sum)<<endl;
    else
        cout<<floor(sum) + 1<<endl;
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
