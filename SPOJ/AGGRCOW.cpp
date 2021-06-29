#include <bits/stdc++.h>
using namespace std;


bool checkPlacelow(vector<int> &cowArea, int cowNum, int dist)
{
    return 0;
}
void bSearchCow(vector<int> &cowArea,int low,int high)
{
    int res =0;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if( checkPlacelow(mid))
        {
            res = mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
}
int solve()
{
    int num,cowNum;
    cin>>num>>cowNum;

    vector<int> cowArea;
    for(int i=0;i<cowNum;i++)
    {
        int temp;
        cin>>temp;
        cowArea.push_back(temp);
    }
    
    sort(cowArea.begin(),cowArea.end());

    int low = 1;
    int high = cowArea[cowArea.size()-1] - cowArea[0];



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
