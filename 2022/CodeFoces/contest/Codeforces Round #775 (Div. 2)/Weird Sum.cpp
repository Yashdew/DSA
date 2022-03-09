#include <bits/stdc++.h>
 
using namespace std;
 
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
 
struct cors {
    vector<int> xs, ys;
    void add(int x, int y) {
        xs.push_back(x);
        ys.push_back(y);
    }
};
 
vector<vector<int>> a;
map<int, cors> cc;
map<int, cors>::iterator it;
 
long long calc(vector<int> vc) {
    vector<long long> f;
    long long ans = 0LL, n = vc.size();
    sort(vc.begin(), vc.end());
    f.push_back(vc[0]);
    for (int i = 1; i < vc.size(); i++)
        f.push_back(f[i - 1] + vc[i]);
    for (int i = 0; i < n; i++)
        ans += ((f[n - 1] - f[i]) - (long long)((n - i - 1) * (long long)vc[i]));
    return ans;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
 
    int n, m;
    long long ans = 0LL;
    cin >> n >> m;
    a = vector<vector<int>>(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            cc[a[i][j]].add(i, j);
        }
    }
    for (it = cc.begin(); it != cc.end(); it++) {
        cors tmp = (*it).second;
        ans += calc(tmp.xs);
        ans += calc(tmp.ys);
    }
 
    cout << ans;
 
    return 0;
}