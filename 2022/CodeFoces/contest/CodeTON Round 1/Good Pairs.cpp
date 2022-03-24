#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;
    vector<long long> array;

    for(long long i=0;i<num;i++){
        long long temp;
        cin>>temp;
        array.push_back(temp);
    }

    long long minimum = INT_MAX;
    long long minIndex=0;
    long long maximum = INT_MIN;
    long long maxIndex=0; 
    
    for(int i=0;i<num;i++){

        if(array[i] > maximum){
            maximum = array[i];
            maxIndex = i;
        }

        if(array[i] < minimum){
            minimum = array[i];
            minIndex = i;
        }
    }
    
    cout<<minIndex+1<<" "<<maxIndex+1<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
            solve();
    }

    return 0;
}
