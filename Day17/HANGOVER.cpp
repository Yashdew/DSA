#include <iostream>
using namespace std;

int main() {
	
    while(1)
    {
        float num;
        cin>>num;
        if(num==0)
        {
            return 0;
        }
        else if (num > 0.01 && num < 5.20 ) 
        {
            float sum=0;
            int n=1;
            float t=0;
            while(sum<num)
            {
                t=(float) 1/(n+1);
                sum+=t;
                n++;
            }
            cout<<n-1<<" card(s)"<<endl;
        }
        
    }
	return 0;
}