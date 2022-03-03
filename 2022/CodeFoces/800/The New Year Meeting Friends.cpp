#include <bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int> array;
    for(int i=0;i<3;i++){
        int temp;
        cin>>temp;
        array.push_back(temp);
    }

    sort(array.begin(),array.end());
    cout<< array[2] - array[0]<<endl;


        
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}
