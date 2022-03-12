#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long a,b,c;
    cin>>a>>b>>c;

    long long A=-1,B=-1;
    if(a<c)
    {   
        A=1;
    }
    if(a*b > c){
        B=b;
    }

    cout<<A<<" "<<B<<endl;
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
