#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    string s,a;
    cin>>s>>a;

    long long pos=0;

    for(int i=0;i<s.length();i++){
        if(pos==a.size())
        {
            cout<<-1<<endl;
            return;
        }
        
        if(a[pos]==s[i]){
            pos++;
        }
        else{
            if(s[i]=='?'){
                char ch = a[pos];
                ch++;

                if(ch=='f'){
                    ch='a';
                }

                s[i] = ch;
            }
            else{
                continue;
            }
        }
    }

    if(pos==a.size())
        cout<<-1<<endl;
    else
        cout<<s<<endl;
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
