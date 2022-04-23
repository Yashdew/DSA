#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;
    vector<string> str;

    for(int i=0;i<num;i++){
        string s;
        cin>>s;
        str.push_back(s);
    }

    long long count=0;
    for(long long i=0;i<num;i++){
        for(long long j=i+1;j<num;j++){
            if(str[i][0]==str[j][0] && str[i][1]==str[j][1])
                continue;
            else{
                if(str[i][0]==str[j][0] || str[i][1]==str[j][1]){

                    count++;
                }
            }
        }
    }

    cout<<count<<endl;
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
