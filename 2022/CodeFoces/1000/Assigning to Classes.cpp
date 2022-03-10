#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<long long> array;

    for(long long i=0;i<2*num;i++){
        long long temp;
        cin>>temp;

        array.push_back(temp);
    }

    sort(array.begin(),array.end());

    cout<<array[num] - array[num-1]<<endl;
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
