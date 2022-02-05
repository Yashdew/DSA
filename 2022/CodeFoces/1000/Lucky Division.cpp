#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int num;
    vector<int> luckyNumber = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    cin>>num;


    for(int i=0;i<luckyNumber.size();i++)
    {
        if(num%luckyNumber[i]==0)
            return 1;
    }
    return 0;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    // int testCases;
    // cin >> testCases;
   
    // while (testCases--)
    // {
    if(solve())
        cout<<"YES"<<endl;
    else    
        cout<<"NO"<<endl;
    // }

    return 0;
}
