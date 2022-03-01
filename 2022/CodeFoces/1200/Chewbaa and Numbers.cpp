#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    long long newNum=0;
    vector<long long> array;
    while(num!=0){
       if(num == 9)
       {
           array.push_back(9);
           break;
       } 
       array.push_back( min( (num%10),9 - (num%10) ) );
       num = num/10;
    }

    for(long long i=array.size()-1;i>=0;i--){
        newNum = newNum*10 + array[i];
    }

    cout<<newNum;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
