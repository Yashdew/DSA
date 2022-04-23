#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long change, k;
    cin>>change>>k;

    //on 1 2 3 k=1
    //off 4 k=0

    if(k==1){
        if(change%4==0)
            cout<<"On"<<endl;
        else
            cout<<"Ambiguous"<<endl;
    }
    else{
        if(change%4==0)
            cout<<"Off"<<endl;
        else
            cout<<"On"<<endl;
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
