#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;
    vector<int> array;

    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }

    if(array.size()==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        vector<int> dif;
        sort(array.begin(),array.end());
        for(int i=0;i<array.size()-1;i++)
        {
            int difVar = abs(array[i+1] - array[i]);
            dif.push_back(difVar);
        }
        sort(dif.begin(),dif.end(),greater<int>());
        if(dif[0]<=1)
        {
            cout<<"YES"<<endl;
        }
        else
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
