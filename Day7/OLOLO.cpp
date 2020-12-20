#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t;
    vector<long long int> num;
    long long int number;

    cin>>t;
    if(t>=0 && t<=500000)
    {	
    	for(int i=0;i<t;i++)
	    {
	        cin>>number;
            if(number>=0 && number<=1000000000)
            {
                num.push_back(number);
            }
            else 
                return 0;
	        
	    }
	
	    sort(num.begin(), num.end()); 
	
	    for (int i = 0; i < num.size(); i++) 
	        {
	            if(num[i]==num[i+1])
	            {
	                cout<<num[i]<<endl;
	            }
	        }
    }
    
	return 0;
}