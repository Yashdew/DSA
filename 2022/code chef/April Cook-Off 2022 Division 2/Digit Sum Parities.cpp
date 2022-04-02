#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;
    long long limit = 1e9;
    while(num < limit){
        long long temp = num;
        long long sum=0;
        while(temp!=0){
            sum = sum + temp%10;
            temp = temp/10;
        }   
        if(sum%2!=0)
        {
            cout<<num<<endl;
            return;
        }
        num++;
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
