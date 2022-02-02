#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int Sfriend,Afriend,num;
    cin>>Sfriend>>Afriend>>num;
    int flag = 0;
    int x = 0;
    while(num!=0)
    {
        if(flag%2==0)
        {
            x = __gcd(Sfriend,num);
        }
        else if(flag%2==1)
        {
            x = __gcd(Afriend,num);
        }
        flag++;
        num = num-x;
    }
    if(flag%2==1)
        cout<<0<<endl;
    else
        cout<<1<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
