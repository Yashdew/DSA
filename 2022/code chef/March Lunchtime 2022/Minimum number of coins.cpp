#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    long long count=0;
    while(num!=0){
        if(num>=10)
        {
            count = count + num/10;
            num=num%10;
        }
        else if(num >= 5)
        {
            count = count + num/5;
            num=num%5;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }

    cout<<count<<endl;
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
