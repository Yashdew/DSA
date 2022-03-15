#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    long long num;
    cin>>num;

    long long A,B;
    int flag=0;
    long long minA=INT_MAX;
    long long temp=INT_MAX; 
    for(long i=0;i*7<=num;i++)
    {
        if( (num- (i*7))%4 == 0)
        {
            A = (num- (i*7))/4;
            B = i;
            if( A+B < temp){
                minA = A;
                B = i;
            }
            flag=1;
        }
    }
    if(flag==0)
    {
        if(num==4 || num==7)
            cout<<num<<endl;
        else 
            cout<<-1<<endl;
    }
        
    else{
         while(minA--)
            cout<<4;
        while(B--)
            cout<<7;
        cout<<endl;
    }
}   
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
