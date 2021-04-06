// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        sort(a,a+size);
        int count=0;
        for(int i=0;i<size-1;i++)
        {
            if(a[i]==a[i+1])
            {
                for(int j=i+1;j<size;j++)
                {
                    if(a[j]==a[i])
                    {
                        count++;
                    }
                }
            }
            
            if(count > size/2 )
            {
                return count;
                break;
            }
        }
        
        if(count==0)
        {
            return -1;
        }

        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends