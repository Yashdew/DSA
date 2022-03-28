#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int X,Y,A,B; 
    cin>>X>>Y>>A>>B;
    int count=2; 
    if(X==A )
        count--;
    else if(X==B)
        count--;
    
    if(Y==B)
        count--;
    else if(Y==A)
        count--;

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
