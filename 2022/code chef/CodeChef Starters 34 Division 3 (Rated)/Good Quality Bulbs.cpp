#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num,X;
    cin>>num>>X;

    int sum=0;
    int i=0;
    while(i<num-1){
        int temp;
        cin>>temp;
        sum+=temp;
        i++;
    }

    if(sum / num >= X )
        cout<<0<<endl;
    else{
        cout<< (num * X) - sum<<endl;
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
