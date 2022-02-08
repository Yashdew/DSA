#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int num;
    cin>>num;

    int count = 0;
    int limit = 4;
    map<int,int> hashmap;

    while(num)
    {
        int temp;
        cin>>temp;
        if(temp==limit)
            count++;
        else
        {
            if(hashmap[limit-temp]>0)
            {
                hashmap[limit-temp]--;
                count++;
            }
            else
            {
                hashmap[temp]++;
            }
        }
        num--;
    }

    if(hashmap.size()==0)
        return count++;
    else
    {
        for(auto it: hashmap)
        {
            if(it.second!=0)
                count = count + ((it.first * it.second)%4);
        }
        return count;
    }
        

    return 0;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout<<solve()<<endl;

    return 0;
}
