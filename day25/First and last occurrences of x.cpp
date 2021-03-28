// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        //cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    int start=-1,end=-1;
    vector <int> pos;
    for(int i=0;i<n;i++)
    {
        if(start==-1)
        {
            if(arr[i]==x)
            {
                start=i;
            }
        }
        else if(start!=-1)
        {
            if(arr[i]==x)
            {
                end=i;
            }
        }
    }
    cout<<start<<" "<<end;
    pos.push_back(start);
    pos.push_back(end);
    return pos;
}