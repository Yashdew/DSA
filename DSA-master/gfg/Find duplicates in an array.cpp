// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
vector<int> duplicates(int arr[], int n);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> ans = duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends


vector<int> duplicates(int a[], int n) {
    vector<int> copy;
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;i++)
        {
            if(a[i]==a[j])
            {
                copy.push_back(a[i]);
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        return copy;
    }
    else
    {
        copy.push_back(-1);
        return copy;
    }
         
}