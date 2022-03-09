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

    int pos1=0,pos2=0;
    for(int i=0;i<place;i++)
    {
        if(array[i]==0)
        {
            pos1=i-1;
            break;
        } 
    }
    for(int i=place-1;i>=0;i--)
    {
        if(array[i]==0)
        {
            pos2=i+1;
            break;
        } 
    }

    cout<<pos2-pos1<<endl;
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
