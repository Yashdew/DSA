#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int numHouse, numTask;

    cin>>numHouse>>numTask;

    vector<int> taskArray;

    int start=1;
    long long int count = 0;
    for(int i=0;i<numTask;i++)
    {
        int temp;
        cin>>temp;

        if(temp-start >= 0)
        {
            count = count + temp - start;
            start = temp;
        }
        else
        {   
            count = count + temp - start + numHouse;
            start = temp;
        }
    }
    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
