#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int ab,ac,bc,abc;
    cin>>ab>>ac>>bc>>abc;
    int ABC = max(abc, max(ab, max(ac,bc) ) );
    if(ABC == abc){
        cout<<ABC - bc <<" "<<ABC-ac<<" "<<ABC-ab<<endl;
    }
    else if(ABC == ab){
        cout<<ABC - bc <<" "<<ABC-ac<<" "<<ABC-abc<<endl;
    }
    else if(ABC == ac){
        cout<<ABC - bc <<" "<<ABC-abc<<" "<<ABC-ab<<endl;
    }
    else if(ABC == bc){
        cout<<ABC - abc <<" "<<ABC-ac<<" "<<ABC-ab<<endl;
    }
    
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
