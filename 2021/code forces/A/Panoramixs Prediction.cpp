#include <bits/stdc++.h>
using namespace std;

int nextprime(int n)
{
    int number=n+1;
    int flag=1;
    while(1)
    {
        for(int i=2;i<=number/2;i++)
        {
            if(number%i == 0)
            {
               flag=0; 
               break;
            }
        }

        if(flag==1)
            break;
        number++;
        flag=1;
    }
    return number;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    int temp = nextprime(n);

    if(temp==m)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
        solve();
    
    return 0;
}
