#include <bits/stdc++.h>
using namespace std;
int getnum(int nums)
{
    cin>>nums;
    return nums;
}
vector<int> getarray(vector<int> array,int nums)
{
    for(int i=0;i<nums;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }
    return array;
}
vector<int> convert(vector<int> array,int nums)
{
    int j=0;
    for(int i=0;i<nums;i++)
    {
        if(array[i]<0)
        {
            if(i!=j)
            {
                swap(array[i],array[j]);
            }
            j++;
        }
    }
    return array;
}
void print(vector<int> array,int nums)
{
    for(int i=0;i<nums;i++)
    {
        cout<<array[i]<<" ";
    }
}
int main()
{  
    int nums;
    nums=getnum(nums);
    
    vector<int> array;
    array = getarray(array, nums);

    array = convert(array,nums);
    print(array,nums);
    return 0;
}
