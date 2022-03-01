#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int numSize;
    cin>>numSize;

    vector<int> array;
    for(int i=0;i<numSize;i++){
        int temp;
        cin>>temp;
        array.push_back(temp;)
    }

    int i=0,j=array.size()-1;
    while(i<=j){
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
        j--;
        i++;
    }

    for(int i=0;i<array.size();i++){
        cout<<array[i]<<" ";
    }
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
