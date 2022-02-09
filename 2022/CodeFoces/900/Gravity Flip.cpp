#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    vector<int> array;
    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;

        array.push_back(temp);
    }

    sort(array.begin(),array.end());

    for(int i=0;i<array.size();i++)
        cout<<array[i]<<" ";
    
    cout<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
