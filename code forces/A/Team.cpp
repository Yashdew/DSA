#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int numExam;
    cin>>numExam;

    int count=0;
    int a,b,c;
    while(numExam--)
    {
        cin>>a>>b>>c;
        if( a+b+c > 1)
            count++;
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
