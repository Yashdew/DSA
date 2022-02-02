#include <bits/stdc++.h>
using namespace std;
int solve()
{
    long long int gold;
    cin>>gold;
    int count=0;
    long long int slow=0;
    long long int fast=1;
    int i=1;
    while(fast <= gold )
    {
        int terms = fast- slow +1;
        int sum = (terms*(fast+slow))/2;
        if(sum==gold)
        {
            cout<<fast<<" "<<slow<<" "<<sum<<" "<<terms<<endl;
            slow=fast+i;
            count++;
        }
        cout<<fast<<" "<<slow<<endl;    

        slow++;
        fast++;
        fast++;
    }
    
    
    cout<<count+1<<endl;
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
