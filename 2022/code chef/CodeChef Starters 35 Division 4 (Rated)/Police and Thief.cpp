#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long X,Y;
    cin>>X>>Y;

    long long count=0;
    if(X >= Y){
        count = X - Y;
        cout<<count<<endl;
        return;
    }   
    while(X!=Y){
        X= X+ 2;
        Y= Y+1;
        count++;
        if(X==Y)
            break;
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
