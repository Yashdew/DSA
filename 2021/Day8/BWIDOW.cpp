#include <bits/stdc++.h> 
using namespace std;

int main() {
	
    int t;
    vector<int> r,R;
    cin>>t;
    if(t>=1 && t<=100)
    {
        while(t--)
        {
            int n;
            cin>>n;
            if(n>=2 && n<=1000)
            {
                for(int i=0;i<n;i++)
                {
                    int num;
                    cin>>num;
                    r.push_back(num);
                    cin>>num;
                    R.push_back(num);
                }
            }
        }
    }
    
	return 0;
}