// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
private:
public:
	int minSwaps(vector<int>&nums){
	    int count=0;
	    for(int i=0;i<nums.size()-1;i++)
	    {
	        int mini=i;
	        for(int j=i+1;j<nums.size();j++)
	        {
	            if(nums[mini]>nums[j])
	            {
	                mini=j;
	            }
	        }
            if(mini!=i)
            {
                int temp = nums[mini];
                nums[mini] = nums[i];
                nums[i] = temp;
                count++;
            }
	        if( is_sorted(nums.begin(), nums.end()) )
	            return count;
	            //break;
	    }
	    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution obj;
		int ans = obj.minSwaps(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends