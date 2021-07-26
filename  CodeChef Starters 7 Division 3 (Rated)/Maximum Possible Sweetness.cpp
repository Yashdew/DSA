#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int N,D;
    cin>>N>>D;

    int price[N],sweet[N];    
    for(int i=0;i<N;i++)
        cin>> price[i];
    for(int i=0;i<N;i++)
        cin>> sweet[i];
    
    vector<pair<int,int>> group;

    for(int i=0;i<N;i++)
    {
        if(price[i] <= D)
            group.push_back({price[i],sweet[i]});
    }

    sort(group.begin(),group.end());
    int ans=0;
    int i=0;
    multiset<pair<int,int>> st;

    for(int j=group.size()-1;j>=0;j--)
    {
        while( i<j && group[j].first + group[i].first <= D)
        {
            st.insert({group[i].second,group[i].first});
            i++;
        }
        auto it = st.find({group[j].second,group[j].first});
        if( j <= i-1 && it != st.end())
            st.erase(it);
        int here = group[j].second;

        if(!st.empty())
        {
            here = here + (*st.rbegin()).first;
        }
        ans = max(ans,here);
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
