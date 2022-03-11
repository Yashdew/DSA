#include <bits/stdc++.h>
using namespace std;
void solve()
{   
    long long num;
    cin>>num;
    if( pow (3,num-1) > 1e9 )
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        string str;
        for(int i=0;i<num;i++){
            long long temp = pow(3,i);
            if(i!=num-1)
                str+=to_string(temp) + " ";
            else
                str+=to_string(temp);
        }
        cout<<str<<endl;
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
