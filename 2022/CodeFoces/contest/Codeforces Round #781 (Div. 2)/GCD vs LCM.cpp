#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    if(num%4==0){
        cout<<num/4<<" "<<num/4<<" "<<num/4<<" "<<num/4<<endl;
    }
    else{
        long long c = 1;
        long long d = 1;
        long long a=0;
        long long b=0;
        
        num = num - c - d;

        if(num%2==0){
            a = (num/2)-1;
            b = (num/2) + 1;
        }
        else{
            a = (num-1)/2;
            b = (num-1)/2 + 1;
        }

        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
            solve();
    }

    return 0;
}
