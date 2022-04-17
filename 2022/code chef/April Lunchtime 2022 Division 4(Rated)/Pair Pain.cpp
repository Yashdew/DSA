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

    sort(array.begin(),array.end());
    long long count=0;
    for(long long  i=0;i<num;i++){
        for(long long  j=i+1;j<num;j++){
            if( (long long)((long long) array[i] + (long long)array[j]) >= (long long) ((long long)array[i]* (long long)array[j]) )
                count++;
        }
    }

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
