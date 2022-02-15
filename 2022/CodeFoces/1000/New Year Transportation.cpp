#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int numSize,location;
    cin>>numSize>>location;

    map<int,int> hashmap;
    vector<int> array;
    for(int i=1;i<numSize;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
        hashmap[i]=0;
    }

    int i=1;
    int flag=0;
    while(i <= location)
    {
        if(hashmap[i]==0)
        {
            hashmap[i]=1;
            if(hashmap[location] == 1 && i == location)
            {
                flag=1;
                break;
            }
            int temp = array[i-1];
            i = i + temp;
        }
    }
    if(hashmap[location] == 1 && flag==1)
        cout<<"YES";
    else
        cout<<"NO";
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
