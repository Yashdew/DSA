#include <bits/stdc++.h>
using namespace std;
void print(vector<int> array,int r)
{
    for(int i=0;i<=r;i++)
    {
        cout<<array[i]<<"  ";
    }
}
void reverse(vector<int> array,int l,int r)
{
    while(l<r)
    {
        int temp = array[l];
        array[l] = array[r];
        array[r] = temp;
        l++;
        r--;
    }
    print(array,array.size()-1);
}
int main()
{  
    vector<int> array;
    int nums;
    cin>>nums;

    for(int i=0;i<nums;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }

    reverse(array,0,array.size()-1);
    return 0;
}
