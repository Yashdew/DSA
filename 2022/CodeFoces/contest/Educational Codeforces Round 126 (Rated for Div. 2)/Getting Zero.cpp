#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<int> array;
    
    if(num==0){ 
        cout<<0<<endl;
        return;
    }

    int dp[16],ans=INT_MAX;

    for(int i=0;i<=15;i++){
        long long x = num + i;
        int c=0;
        while(x%2==0){
            c++;
            x=x/2;
        }

        dp[i] = 
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
