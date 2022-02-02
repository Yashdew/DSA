#include <bits/stdc++.h>
using namespace std;
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
    
    int sum =0;
    int X=0;
    int Y=0;
    int Z=0;

    while (testCases--)
    {
        int x,y,z;
        cin>>x;
        cin>>y;
        cin>>z;
        X+=x;
        Y+=y;
        Z+=z;
    }
    if(X==0 && Y==0 && Z==0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
