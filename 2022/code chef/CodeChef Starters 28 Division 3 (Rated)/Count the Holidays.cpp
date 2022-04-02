#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    vector<int> nums(31,0);
    nums[6]=nums[7]=nums[13]=nums[14]=nums[20]=nums[21]=nums[27]=nums[28]=1;
    int count=8;

    while(num--){
        int temp;
        cin>>temp;
        if(nums[temp]==0)
            {
                nums[temp]=1;
                count++;
            }
    }

    cout<<count<<endl;
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
