#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool bserch(int array[],int num,int last) 
{
    int begin=0,end=last;
    int mid=0;
    while(begin<end)
    {
        mid=(begin+end)/2;

        if(array[mid] > num)
        {
            end=mid-1;
        }
        else if(array[mid] < num)
        {
            begin=mid+1;
        }
        else
            return true;
        
    }
    return false;
}
int main() {
    int n,k,flag=0;
	cin>>n>>k;
    int count=0;
    if(n>=1 && k>=1 && n<=pow(10,5))
    {
        int array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }

        sort(array,array+n);

       
        for(int i=0;i<n;i++)
        {
            if( bserch(array, array[i]+k,n) )
            {
                ++count;
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<count+1<<endl;
    }
    else
    {
        cout<<count<<endl;
    }
	return 0;
}