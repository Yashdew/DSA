#include <bits/stdc++.h>
using namespace std;

int main() {
	int num=0;
	
    cin>>num;

    float a[10000];
    int i;
	while(i<num)
    {   
        cin>>a[i];
        i++;
    }
    int count=0;
    float balance=0;
    for(int i=0;i<num;i++)
    {
        if(a[i]==0.50)
        {
            
            count++;
            balance=balance+0.50;
        }
        else if(a[i]==0.25)
        {
            if(balance==0)
            {
                count++;
                balance=balance+0.75;
            }
            else
            {
                balance=balance-0.25;
            }
            
        }
        else
        {
            count++;
            balance=balance+0.25;
        }
        
    }
    cout<<count+1<<endl;
	return 0;
}