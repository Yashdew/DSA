#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;

    int intersection = n*m;
    int flag = 1; //Akshat

    while(n!=0 && m!=0)
    {
        intersection--;
        n--;
        m--;
        intersection = n*m;
        if(flag==1)
            flag=0;
        else
            flag=1;
        if(intersection < 1)
            break;
    }

    if(flag==1)
        cout<<"Malvika";
    else
        cout<<"Akshat";
        
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
