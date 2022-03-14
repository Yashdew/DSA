#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<long long> array;

    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;

        array.push_back(temp);
    }

    long long count=0;
    long long limit=INT_MAX;
    for(int i=array.size()-1;i>=0;i--){
        limit = min(limit-1,array[i]);
        limit = max( (long long)0,limit);
        count+=limit;
    }
    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}

