#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long start,end;

    cin>>start>>end;
    if(2*start > end){
        cout<<-1<<" "<<-1<<endl;
    }
    else{
        cout<<start<<" "<<2*start<<endl;
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
