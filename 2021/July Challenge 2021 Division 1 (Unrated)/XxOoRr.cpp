#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int num,k;
    cin>>num>>k;
    vector<int> array;
    vector<int> bit32var(33,0);
    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        int j=32;
        while(temp>0)
        {
            bit32var[j] = bit32var[j] + temp%2;
            j--;
            temp=temp/2; 
        }
    }

    int count=0;
    for(int i=0;i<bit32var.size();i++)
    {
        if(bit32var[i]%k==0)
            count = count + bit32var[i]/k;
        else
            count = count + bit32var[i]/k + 1;
    }
    cout<<count<<endl;
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
