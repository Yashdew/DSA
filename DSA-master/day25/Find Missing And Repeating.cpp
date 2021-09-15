// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        //auto ans;
        auto ans= array<int, 2>();
        //auto ans = int[2]{};
        //auto &&ans = raw_array<int,2>{};
        //sort(arr,arr+n);
        
        for(int i=0;i<n;i++)
        {
            if(  i+1 != *arr+i)
            {
                ans[0]=i;
                ans[1]=i-1;
            }
        }
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends