#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ll long long
#define ld long double
#define debug(x) cerr << #x << '=' << (x) << endl
#define pb push_back
#define all(x) x.begin(), x.end()
#define sz(x) (11)(x).size()
#define vi vector<int>
#define ff first
#define ss second
#define ln "\n"
#define endl "\n"
#define google(n) cout<<"Case #"<<n<<": ";
#define vi vector<int>

/*------------------------*/
const int MM=100002;
vector<vector<int>> g(MM);
int n;

vector<vector<int>> dist;

int bc=0;
void dfs(int src, int pre){
    dist[bc][src] = 1+dist[bc][pre];
    
    for(int x : g[src]){
        if(dist[bc][x] == INT_MAX)
            dfs(x, src);
    }
}

void dijstra(int src){
    if(dist[src][src]==0)
        return;
        
    bc=src;
    dist[src][src] = 0;
    
    for(int x:g[src]){
        if(dist[src][x] == INT_MAX)
            dfs(x, src);
    }
}

void solve(){
    int q; cin>>n>>q;
    
    g.clear();
    g.resize(MM);
    
    for (int i = 1; i <= n-1; ++i)
    {
        int u,v; cin>> u >> v;
    
        g[u].pb(v);
        g[v].pb(u);
    }

    while(q--){
        int k,d; cin>> k >> d;
        int v[k];
    
       
        for (int i = 0; i < k; ++i)
            cin>> v[i];
    
        int ans=0;
        dist.resize(n+1, vector<int> (n+1, INT_MAX));
    
        for (int i = 0; i< k-1; ++i)
        {
            dijstra(v[i]);
        
            for (int j = i+1; j < k; ++j)
            {
                if(dist[v[i]][v[j]] == d)
                    ans++;
            }
        }
    
        cout<< ans <<"\n";
    }
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