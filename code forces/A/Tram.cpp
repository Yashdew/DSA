#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    int maximum = 0;
    int count = 0;
    for(int i=0;i<num;i++)
    {
        int exit,enter;
        cin>>exit>>enter;
        count = count - exit;
        count = count + enter;

        maximum = max(maximum,count);
    }
    cout<<maximum<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
