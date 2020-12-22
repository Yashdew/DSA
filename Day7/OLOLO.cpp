#include <bits/stdc++.h> 
using namespace std;

vector<long long int> arrayinput(int t, vector<long long int> num)
{
	long long int number;
	for(int i=0;i<t;i++)
	    {
	        cin>>number;
            if(number>=0 && number<=1000000000)
            {
                num.push_back(number);
            }
            
	    }
	return num;
}
void duplicate(vector<long long int> num)
{
	for(int i=0; i<num.size(); i++)
		{
			int ctr=0;
			int k;
			for(int j=0,k=num.size(); j<k+1; j++)
			{
				/*Increment the counter when the seaarch value is duplicate.*/
				if (i!=j)
					{
					if(num[i]==num[j])
						{
							ctr++;
						}
					}
			}
			if(ctr==0)
				{
				cout<<num[i]<<endl;
				}
		}
		
}
int main() {
	int t;
    vector<long long int> num;
    long long int number;

    cin>>t;
    if(t>=0 && t<=500000)
    {	
    	
		num=arrayinput(t,num);
	    sort(num.begin(), num.end()); 
		duplicate(num);
	}	
		
    
	return 0;
}