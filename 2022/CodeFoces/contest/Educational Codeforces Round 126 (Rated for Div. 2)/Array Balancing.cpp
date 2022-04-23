#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin>>n;

    vector<long long> a(n,0),b(n,0); 

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        if(a[i] > b[i])
        {
            int temp = b[i];
            b[i] = a[i];
            a[i] = temp;
        }
    }

    long long sum = 0;
    for(int i=0;i<n-1;i++){
        sum = sum + abs(a[i] - a[i+1]) + abs(b[i]-b[i+1]);
    }

    cout<<sum<<endl;
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
