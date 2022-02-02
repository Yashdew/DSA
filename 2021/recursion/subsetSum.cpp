// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:
    vector<int> array;
    void sumSubset(vector<int> arr, int low,int high,int sum)
    {
        if(low == high)
        {
            array.push_back(sum);
            return;
        }
            
            
        sumSubset(arr,low+1,high,sum+arr[low]);
        sumSubset(arr,low+1,high,sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        int sum = 0;
        sumSubset( arr, 0, N, sum);
        sort(array.begin(),array.end());
        return array;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    int variable = 0;
    while (t--)
    {
        cout<<typeid(variable).name() << endl;
    }
    return 0;
}  // } Driver Code Ends