#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long sizeString;
    string string;
    cin>>sizeString>>string;

    long long i=0;
    long long count=0;
    while(i<sizeString){
        if(string[i]==string[i+1]){
            count++;
            i=i+2;
        }
        else{
            count++;
            i++;
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
