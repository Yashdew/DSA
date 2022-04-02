#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    long long count=0;
    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;
        count+=(temp==0);
    }

    cout<<max(count,num-count)<<endl;

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
