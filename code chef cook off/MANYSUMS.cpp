#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int L,R;
        cin>>L>>R;
        if(L==R)
        {
            cout<<1<<endl;
        }
        if (L!=R)
        {
            cout<<3<<endl;
        }
    }
}