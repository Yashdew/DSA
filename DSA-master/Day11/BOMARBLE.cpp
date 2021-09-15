#include<bits/stdc++.h>
//#define MAX 100
using namespace std;

int main() {
    long long int n=1;
    while(n!=0)
    {
        cin>>n;
        if(n>=1 && n<=10000)
        {
            cout<<((n+1)*(3*(n+1) - 1))/2<<endl;
        }
        
    }
    return 0;
}