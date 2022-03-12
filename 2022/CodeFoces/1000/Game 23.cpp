#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num,mum;
    cin>>num>>mum;

    long long count=0;
    if( mum % num == 0)
    {
        long long temp = mum/num;

        while(temp!=1){
            if(temp%2==0)
            {
                temp=temp/2;
                count++;
            } 
            else if(temp%3==0){
                temp=temp/3;
                count++;
            }
            else{
                cout<<-1<<endl;
                return;
            }
            if(temp==1){
                break;
            }
        }
        cout<<count<<endl;
        return;
    }
    else{
        cout<<-1<<endl;
        return;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
