#include <bits/stdc++.h>
using namespace std;

int countNumShop(int temp,vector<int> shops)
{
    
}
void solve()
{
    int num;
    cin>>num;   

    vector<int> shops;
    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;

        shops.push_back(temp);
    }

    sort(shops.begin(),shops.end());

    int days;
    cin>>days;
    for(int i=0;i<days;i++)
    {
        int temp;
        cin>>temp;
        int count = countNumShop(temp,shops);
        cout<<count<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
