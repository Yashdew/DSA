// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    string temp;
	    for(int i=S.length()-1;i>=0;i--)
	    {
	        temp=temp+S[i];
	    }
	    
	    int flag=1;
	    for(int i=0;i<S.length();i++)
	    {
	        if(temp[i]!=S[i])
	        {
	            cout<<temp[i]<<" "<<S[i];
	            flag=0;
	            break;
	        }
	    }
	    
	    return flag;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends