#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num,sum=0;
    cin>>num;
    vector<int> array;
    for(int i=0;i<num;i++)
    {
        int x;
        cin>>x;
        array.push_back(x);
        sum+=x;
    }
    sum = sum/2;

    sort(array.begin(),array.end());
    int count=0;
    int ans=0;

    for(int i=num-1;i>=0;i--)
    {
        ans+=array[i];
        count++;
        if(ans> sum)
            break;
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
