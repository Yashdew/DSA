#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<long long> array(num,0);
    map<long long,long long> hashmap;

    for(int i=0;i<num;i++){
        cin>>array[i];

        hashmap[array[i]]++;
    }

    long long ele=0;
    long long count=0;
    
    for(auto it:hashmap){
        if(it.second > count){
            ele = it.first;
            count = it.second;
        }
    }


    long long changesCount = num - count;
    long long ans = 0;

    while(changesCount > 0){
        ans++;
        if(count < changesCount){
            changesCount -= count;
            ans+=count;
            count*=2;
        }
        else{
            ans+=changesCount;
            break;
        }
    }

    cout<<ans<<endl;
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
