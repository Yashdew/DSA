#include <bits/stdc++.h>
using namespace std;

int checksize(int innerR[],int outerR[],int size)
{
    int count=0,flag=0;
        for(int i=0,j=1;i<size-1,j<size;i++,j++)
        {
            if(outerR[i]<innerR[j])
            {
                count++;
                flag=1;
            }
        }
    if(flag==0)
        return -1;
    else
        return count+1;
}

int main() {
	
    int t;
    cin>>t;
    if(t>=1 && t<=100)
    {
        while(t--)
        {
            int size;
            cin>>size;
            if(size>=2 && size<=1000)
            {
                int innerR[size],outerR[size];
                int temp;
                for(int i=0;i<size;i++)
                {
                    cin>>temp;
                    if(temp>=1 && temp<=pow(10,7))
                    {
                        innerR[i]=temp;
                    }
                    
                    cin>>temp;
                    if(temp>=1 && temp<=pow(10,7))
                    {
                        outerR[i]=temp;
                    }
                    
                }

                cout<<checksize(innerR,outerR,size)<<endl;
            }
        }
    }
    
	return 0;
}