#include <bits/stdc++.h>
using namespace std;

int count(vector<int> array,int target)
{
    int countNum = 0;
    int XOR = 0;

    map<int,int> freq;
    
    int XORR = 0;
    for(int i=0;i<array.size();i++)
    {
        XORR ^= array[i];

        if(XORR == target)
            countNum++;

        if( freq.find(XORR ^ target) != freq.end() )
        {
            countNum += freq[XORR^target];
        }

        freq[XORR]++;
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