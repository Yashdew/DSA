#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int numoffreiend;
    cin >> numoffreiend;
    
    set<int> friendid;
    int temp,num;
    for(int i=0;i<numoffreiend;i++)
    {
        cin>>temp;
        friendid.insert(temp);
        cin>>num;

        for(int j=0;j<num;j++)
        {
            cin>>temp;
            friendid.insert(temp);
        }
    }
    cout<<friendid.size() - numoffreiend;
    return 0;
}
