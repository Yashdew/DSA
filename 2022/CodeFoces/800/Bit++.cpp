#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int steps;
    cin>>steps;


    int count = 0;
    while(steps--)
    {
        string str;
        cin>>str;

        if(str == "X++")
            count++;
        else if(str == "++X")
            count++;
        else if(str == "X--")
            count--;
        else if(str == "--X")
            count--;
    }

    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
            solve();
    
    return 0;
}
