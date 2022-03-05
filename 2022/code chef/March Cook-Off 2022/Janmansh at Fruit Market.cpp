#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long X,A,B,C;
    cin>>X>>A>>B>>C;

    vector<long long> array(3,0);
    array[0] = A;
    array[1] = B;
    array[2] = C;

    sort(array.begin(),array.end());

    cout<< (array[0]*(X-1) ) + array[1]<<endl;
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
