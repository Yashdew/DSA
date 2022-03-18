#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num=0;
    cin>>num;

    long long count=0;
    if(num%2!=0)
    {
        count++;
        num--;
    }
    
    count = count+ num/2;
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
