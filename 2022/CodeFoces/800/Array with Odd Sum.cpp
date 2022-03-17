#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<long long> array;
    long long sum=0;
    long even=0,odd=0;
    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;
        if(temp%2==0)
            even++;
        else
            odd++;
        array.push_back(temp);
        sum+=temp;
    }
    if(sum%2!=0 || sum==1)
        cout<<"YES"<<endl;
    else{
        if(odd!=0 && even!=0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
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
