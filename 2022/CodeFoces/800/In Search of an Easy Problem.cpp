#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>> num;

    int flag=0;
    while(num--)
    {
        int temp;
        cin>>temp;
        if(temp==1)
            flag=1;
    }

    if(flag==1)
        cout<<"HARD"<<endl;
    else
        cout<<"EASY"<<endl;

}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}