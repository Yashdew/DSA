#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    vector<int> numArray;
    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;

        numArray.push_back(temp);
    }

    int count=1;
    int maximum = 1;
    for(int i=1;i<num;i++)
    {
        if(numArray[i-1] <= numArray[i])
            count++;
        else
            count = 1;
        
        maximum = max(count,maximum);
    }

    cout<<maximum<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
