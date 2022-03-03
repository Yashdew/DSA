#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num,div;
    int x;
    cin>>num>>div;

    if(div > num)
        cout<<-1<<endl;
    else{
        if(num%2==0)
            x = num/2;
        else
            x = (num/2) + 1;

        while(x%div!=0)
        {
            x++;
        } 

        cout<<x<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    
    solve();
    
    return 0;
}
