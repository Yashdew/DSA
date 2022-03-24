#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long A,B; 
    cin>>A>>B; 

    if(A%B==0)
        cout<<0<<endl;
    else{
        long long temp = A/B; 
        long long X = temp + 1;

        cout<< X*B - A<<endl;
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
