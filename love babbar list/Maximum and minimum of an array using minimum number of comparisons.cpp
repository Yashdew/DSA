#include <bits/stdc++.h>
using namespace std;
class Array
{
    public:
    int max;
    int min;
    

}obj;

Array getMaxMin(vector<int> array,int nums)
{
    Array pair;
    if(nums==1)
    {
        pair.max=array[0];
        pair.min=array[0];
        return pair;
    }

    if(array[0]>array[1])
    {
        pair.max=array[0];
        pair.min=array[1];
    }
    if(array[0]<array[1])
    {
        pair.max=array[1];
        pair.min=array[0];
    }

    for(int i=2;i<nums;i++)
    {
        if(array[i] > pair.max)
        {
            pair.max=array[i];
        }
        else if(array[i] < pair.min)
        {
            pair.min=array[i];
        }
    }

    return pair;
}
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
int main()
{  
    int nums;
    nums=getnum(nums);
    
    vector<int> array;
    array = getarray(array, nums);
    
    Array object = getMaxMin(array,nums);

    cout<<object.max<<"  "<<object.min;
    
    return 0;
}
