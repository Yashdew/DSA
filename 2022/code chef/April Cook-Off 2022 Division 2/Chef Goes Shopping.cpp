#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    vector<int> L(num,0);
    vector<int> R(num,0);

    for(int i=0;i<num;i++)
        cin>>L[i];
    for(int i=0;i<num;i++)
        cin>>R[i];

    int ans=0;
    for(int i=0;i<num-1;i++){
        ans = ans + min(R[i],L[i+1]);
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
