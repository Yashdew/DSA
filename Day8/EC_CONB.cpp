#include <bits/stdc++.h> 
using namespace std;

int main() {
	
    int t;
    long long int number;
    vector<long long int> num;
    cin>>t;
    while(t--)
    {
        cin>>number;
        if(number>=1 && number<=pow(10,7))
        {
            num.push_back(number);
        }
            
    }

    for(int i=0;i<num.size();i++)
    {
        if(num[i]%2==0)
        {
            if(i%2==0)
            {
                cout<<num[i]/2<<endl;
            }
            else if(i%2!=0)
            {
                cout<<1<<endl;
            }
            
        }
        else if(num[i]%2!=0)
        {
            cout<<num[i]<<endl;
        }
    }
    return 0;
}