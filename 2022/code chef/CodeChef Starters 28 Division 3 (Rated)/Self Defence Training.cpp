#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;
    int count=0;


    while(num--){
        int temp;
        cin>>temp;
        if(temp >= 10 && temp<=60)
            count++;    
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
