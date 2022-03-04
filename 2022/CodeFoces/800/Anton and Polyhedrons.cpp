#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    int count=0;
    while(num--){
        string str;
        cin>>str;

        if(str=="Tetrahedron")
            count+=4;
        else if(str=="Cube")
            count+=6;
        else if(str=="Octahedron")
            count+=8;
        else if(str=="Dodecahedron")
            count+=12;
        else if(str=="Icosahedron")
            count+=20;
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
