#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;

    vector<int> array;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;

        array.push_back(temp);
    }
    sort(array.begin(),array.end());

    int minimum = 0;

    for(int i=0;i<m;i++)
    {
        if(array[i] < 0)
            minimum+=array[i];
    }

    cout<<minimum*(-1)<<endl;
}   
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    solve();
   
    return 0;
}
