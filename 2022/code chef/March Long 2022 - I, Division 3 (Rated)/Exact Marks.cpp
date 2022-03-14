#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num,X;
    cin>>num>>X;

    long long A=0,B=0,C=0;

    if(X%3==0)
        A+=(X/3);
    else if(X%3==1){
        A+=(X/3)+1;
        B+=2;
    }
    else if(X%3==2){
        A+=(X/3)+1;
        B+=1;
    }

    if(A+B <=num)
    {
        cout<<"YES"<<endl;
        cout<<A<<" "<<B<<" "<<num-A-B<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
