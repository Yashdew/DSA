#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    long long start=0;
    cin>>num;
    
    if(num % 2==0){
        cout<<num/2<<endl;
    }
    else{
        cout<< -( (num+1)/2)<<endl;
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
