#include <bits/stdc++.h>
using namespace std;
int digitCheck(int num){
    int sum=0;

    while(num!=0){
        sum = sum + num%10;
        num = num/10;
    }

    return sum%2;
}
void solve()
{
    long long num;
    cin>>num;
    
    if(digitCheck(num)!=digitCheck(num+1))
        cout<<num+1<<endl;
    else
        cout<<num+2<<endl;
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
