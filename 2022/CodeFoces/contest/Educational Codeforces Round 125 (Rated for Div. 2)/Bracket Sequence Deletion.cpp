#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long num;
    cin>>num;
    string s;
    cin>>s;
    int ans = 0;
	int p = 0;
	while(p + 2 <= num) {
		if (s[p] == '(') {
			ans++;
			p += 2;
		} else {
			int q = p;
			p++;
			while(p < num && s[p] == '(') p++;
			if (p == num) {
				p = q;
				break;
			}
			p++;
			ans++;
		}
	}
	cout<<ans<<" "<<num - p<<endl;
    //or(int i = 0; i <= num; ++i) h1[i] = hr1[i] = p1[i] = 0;
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
