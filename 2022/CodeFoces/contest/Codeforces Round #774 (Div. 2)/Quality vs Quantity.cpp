#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long nums;
    cin>>nums;

    vector<long long> array;
    int i=0;
    while(i<nums){
        long long temp;
        cin>>temp;
        i++;
        array.push_back(temp);
    }

    sort(array.begin(),array.end());

   long long blue = array[0]+array[1];
   long long red = array[nums-1];
   int low=2,high=nums-2;

    bool flag=0;
   while(low<high){
       if(red>blue)
       {
           flag=1;
           break;
       }
       blue+=array[low];
       red+=array[high];
       low++;
       high--;
   }

    if(flag || red > blue)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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
