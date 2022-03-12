#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int k,count=0;
	char ch;
	cin>>k;
	string s;
	cin>>s;
	int l=s.size();
	sort(s.begin(),s.begin()+s.size());
	for(int i=0;i<s.size();i++){
	    if(i%k==0){
	       ch=s[i]; 
	    }
	    if(s[i]==ch){
	        count++;
	    }
	}
	if(l==count && count%k==0){
	    for(int i=0;i<k;i++){
	        for(int l=0;l<s.size();l+=k){
	            cout<<s[l];
	        }
	    }
	}else{
	    cout<<"-1";
	}
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
