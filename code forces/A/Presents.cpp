#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;
    vector<int> pArray(num+1,0);

    for(int i=1;i<=num;i++)
    {
        int x;
        cin>>x;
        pArray[x] = i;
    }
    for(int i=1;i<=num;i++)
    {
        cout<<pArray[i]<<" ";
    }
    cout<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
