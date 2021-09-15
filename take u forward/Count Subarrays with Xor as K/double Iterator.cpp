#include <bits/stdc++.h>
using namespace std;
int count(vector<int> array,int target)
{
    int countNum=0;
    for(int i=0;i<array.size();i++)
    {
        int sum=0;
        for(int j=i;j<array.size();j++)
        {
            sum ^= array[j];

            if(sum==target)
                countNum++;
        }
    }
    return countNum;
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
