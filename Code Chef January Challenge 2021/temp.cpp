#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        int m;
        cin>>n;
        cin>>m;
        
        int A[n];
        int B[m];
        
        int sum1 = 0;
        int sum2 = 0;
        
        int count = 0;
        
        
        
        for(int i=0; i<n; i++)
        {
            cin>>A[i];
            
            sum1 = sum1 + A[i];
        }
        
        for(int i=0; i<m; i++)
        {
            cin>>B[i];
            
            sum2 = sum2+B[i];
        }
        
        sort(A , A+n);
        sort(B , B+m);
        
        if(sum1>sum2)
        {
            cout<<0<<endl;
        }
        
        else if(A[0]==B[m-1] && sum1>sum2)
        {
            cout<<0<<endl;
        }
        else if(A[0]==B[m-1] && sum1<=sum2)
        {
            cout<<-1<<endl;
        }
        
        else 
        {
            int i=0;
            int j=m-1;
            
            while(i<n && j>=0)
            {
                if(A[i]<B[j])
                {
                    sum1 = (sum1 - A[i]) + B[j];
                    sum2 = (sum2 - B[j]) + A[i];
                    count++;
                }
                else 
                     break;
                
                if(sum1>sum2)
                {
                    break;
                }
                else
                {
                    i++;
                    j--;
                }
            }
            
                if(sum1>sum2)
                {
                    cout<<count<<endl;;
                }
                else
                {
                    cout<<-1<<endl;
                }
            
        }
        
        
        
    
    }
	// your code goes here
	return 0;
}