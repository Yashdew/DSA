#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    
    for(long long i=0;i<num;i++){
        if(i%2!=0)
        {
            cout<<2*i<<" ";
        }
        else{
            cout<<(i+1)<<" ";
        }
    }

    cout<<endl;
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
