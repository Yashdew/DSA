#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    int even=0;
    int odd=0;

    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;

        if(temp%2==0)
            even++;
        else if(temp%2!=0)
            odd++;
    }
    if(odd%2!=0)
    {
        cout<<even<<endl;
    }
    else{
        cout<<min(odd/2,even)<<endl;
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
