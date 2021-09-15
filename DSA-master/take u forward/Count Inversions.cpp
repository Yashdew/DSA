#include <bits/stdc++.h>
using namespace std;

long long int merge(long long int array[],long long int nums[],long long int left,long long int mid,long long int right)
{
    long long int i = left;
    long long int j = mid;
    long long int k = left;
    
    long long int count = 0;
    while( (i <= mid -1) && (j <=right) )
    {
        if(array[i]<=array[j])
        {
            nums[k++] = array[i++];
        }
        else
        {
            nums[k++] = array[j++];

            count = count + (mid-i);
        }
    }
    while(i <= mid -1)
    {
        nums[k++] = array[i++];
    }
    while(j <=right)
    {   
        nums[k++] = array[j++];
    }

    for(i = left ; i<=right ;i++)
    {
        array[i] = nums[i];
    }

    return count;
}

long long int mergesort(long long int array[],long long int nums[],long long int left,long long int right)
{
    long long int mid,count=0;

    if(left>=right)
    {
        mid = (right+left)/2;
        count+=mergesort(array,nums,left,mid);
        count+=mergesort(array,nums,mid+1,right);
        count+=merge(array,nums,left,mid+1,right);
    }
    return count;
}

int main()
{  
    long long int array[] = {8,4,2,1};
    // array[0] = 8;
    // array[1] = 4;
    // array[2] = 2;
    // array[3] = 1;
    
    long long int nums[4];
    long long int count=0;
    count = mergesort(array,nums,0,3);

    cout<<count<<endl;


    return 0;
}
