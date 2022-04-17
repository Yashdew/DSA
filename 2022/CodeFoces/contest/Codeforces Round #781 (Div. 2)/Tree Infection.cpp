#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    map<int,int> hashmap;
    num--;

    for(int i=0;i<num;i++){
        int x = 0;
        cin>>x;

        hashmap[x]++;
    }

    int ans = hashmap.size() + 1;
    vector<int> v;
    int c = ans,maxa=0;

    for(auto it:hashmap){
        v.push_back(it.second);
    }

    sort(v.begin(),v.end(),greater<int>());

    for(int i=0;i<v.size();i++){
        v[i]-=c; 
        if(v[i] < 0)
            v[i] = 0;
        c--;
        maxa = max(maxa,v[i]);
    }

    int freq[maxa+2]={0};

    for(int i=0;i<v.size();i++){
        freq[1]++;
        freq[v[i]+1]--;
    }

    for(int i=1;i<maxa+2;i++){
        freq[i]+=freq[i-1];
    }

    int l=1,r=maxa+1;

    while(freq[r]==0)
        r--;

    while(l<=r){
        if(l==r){
            ans++;
            break;
        }
        ans++;
        freq[r]--;
        l++;
        if(freq[r]==0)
            r--;
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
