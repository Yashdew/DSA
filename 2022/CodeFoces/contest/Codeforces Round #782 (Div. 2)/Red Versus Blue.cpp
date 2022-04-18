#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    long long red;
    long long blue;
    cin>>num>>red>>blue;

    long long mul = red /(blue+1);
    long long remaining = red%(blue+1);
    string str;

    int j=0;
    int k=0;
    while(j<red){
        int i=0;
        while(i<mul){
            str+='R';
            j++;
            i++;
        }
        if(remaining){
            str+='R';
            j++;
            remaining-=1;
        }

        if(k<blue){
            str+='B';
            k++;
        }
    }

    cout<<str<<endl;
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
