#include <bits/stdc++.h>
using namespace std;

set<vector<int>> helper(vector<int>& nums,vector<int>& array,set<vector<int>>& subset,int index)
{
    sort(array.begin(),array.end());
    subset.insert(array);
    for(int i = index;i<nums.size();i++)
    {
        array.push_back(nums[i]);
        helper(nums,array,subset,i+1);
        array.pop_back();
    }
    return subset;
}
int Print_Vector(vector<int> it)
{
    int sum =0;
    for(int i=0;i<it.size();i++)
    {
        sum^=it[i];
    }
    return sum;
}
void Print_Vector1(vector<int> it)
{
    //int sum =0;
    for(int i=0;i<it.size();i++)
    {
        cout<<it[i]<<" ";
    }
}
int count(vector<int>& array,int target)
{
    int countnum=0;
    set<vector<int>> subset; 
    vector<int> temp;
    subset = helper(array,temp,subset,0);

    for (auto it = subset.begin();it != subset.end();it++) {
        Print_Vector1(*it);
        cout<<endl;
    }
    for (auto it = subset.begin();it != subset.end();it++) {
        int sum = Print_Vector(*it);
        if(sum==target)
            countnum++;
    }
    return countnum;
}
int main()
{  
    vector<int> array;
    array.push_back(5);
    array.push_back(6);
    array.push_back(7);
    array.push_back(8);
    array.push_back(9);
    int target = 5;
    
    int status = count(array,target);
    cout<<status;
    return 0;
}
