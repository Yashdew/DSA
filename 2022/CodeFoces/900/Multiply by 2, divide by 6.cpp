#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    if(num==1){
        cout<<0<<endl;
        return;
    }

    int count = 0;
    int countTwo = 1;
    while(num!=1)
    {
        if( num%6 == 0){
            num = num/6;
            count++;
            countTwo = 1;
            if(num == 1)
            {
                cout<<count<<endl;
                return;
            }
        }
        else{
            num = num *2;
            count++;
            countTwo = countTwo*2;
        }

        if(countTwo > 6)
        {
            cout<<-1<<endl;
            return;
        }
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
