#include <bits/stdc++.h>
using namespace std;
void solve()
{
    map<long long, long long> hashmap;

    long long num;
    cin>>num;

    long long value=-1;
    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;
        hashmap[temp]++;
        if(hashmap[temp]==3)
            value = temp;
    }

    if(value==-1)
        cout<<-1<<endl;
    else
        cout<<value<<endl;
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
