#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num, admin;
    cin>>num>>admin;

    long long sum=0;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;

        sum+=temp;
    }

    if( sum/num >= admin)
        cout<<num<<endl;
    else{
        long long count = 0;
        count = count + admin/sum;
        admin = admin%sum;
        if(admin!=0)
            count = count + 1;
        cout<<count<<endl;
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
