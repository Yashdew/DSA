#include <bits/stdc++.h>
using namespace std;
int main()
{  
    long long int numShops=0;
    cin>>numShops;
    vector<long long int> price;
    for(int i=0;i<numShops;i++)
    {
        int temp;
        cin>>temp;
        price.push_back(temp);
    }
    sort(price.begin(),price.end());
    long long int numDays=0;
    cin>>numDays;

    while(numDays--)
    {   
        int coin=0;
        cin>>coin;
        auto it = find (price.begin(), price.end(), coin);
    }
    return 0;
}
