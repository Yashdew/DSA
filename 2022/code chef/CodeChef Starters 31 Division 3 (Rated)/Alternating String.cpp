#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long zero=0,ones=0;
    string str;
    long long num;
    cin>>num;
    cin>>str;   

    long long i=0;
    while(i<num){
        if(str[i]=='0')
            zero++;
        else{
            ones++;
        }
        i++;
    }

    if(ones==zero){
        cout<<2*zero<<endl;
    }
    else{
        if(ones > zero){
            cout<<2*zero + 1<<endl;
        }
        else{
            cout<<2*ones + 1<<endl;
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
