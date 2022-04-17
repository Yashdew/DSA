#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    //vector<long long> array;

    long long pos=0,neg=0;
    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;
        if(temp < 0)
            neg++;
        
        else if(temp > 0)
            pos++;
        else
            continue;
    }

    long long count = neg*(neg-1) /2  + pos*(pos-1)/2 ;
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
