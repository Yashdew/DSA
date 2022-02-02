#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num,chips;
    cin>>num>>chips;

    //vector<int> capacity(num,0);

    int i=1;
    while(1)
    {
        if(i<=chips)
        {
            chips = chips-i;
            i++;
        }
        else if( i > chips || chips==0)
        {
            break;
        }
        if(i==num+1)
            i=1;

    }
    cout<<chips<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
