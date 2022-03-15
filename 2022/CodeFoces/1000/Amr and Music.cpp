#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num,days;
    cin>>num>>days;

    pair<long long, long long> vect[num];

    for(int i=0;i<num;i++){
        cin>>vect[i].first;
        vect[i].second = i;
    }
    sort(vect,vect+num);

    vector<long long> ans;
    for(int i=0;i<num;i++){
        if(days < vect[i].first)
            break;
        
        ans.push_back(vect[i].second+1);
        days-=vect[i].first;
    }

    sort(ans.begin(),ans.end());

    cout<<ans.size()<<endl;
    for(auto it: ans)
        cout<<it<<" ";
    cout<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
