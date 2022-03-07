#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int place;
    cin>>place;

    vector<int> array;
    long long  count=0;
    for(int i=0;i<place;i++){
        int temp;
        cin>>temp;
        array.push_back(temp);
    }
    for(int i=0;i<place-1;i++)
    {
        if(array[i]==1 && array[i+1]==0)
            count=count+1; 
        else if(array[i]==0 && array[i+1]==1)
            count=count+1; 
    }
    cout<<count<<endl;
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
