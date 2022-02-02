#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int sizeofArray;
    cin>>sizeofArray;
    vector<int> array(sizeofArray,0);
    int numOfOperation;
    cin>>numOfOperation;

    
    while(numOfOperation--)
    {
        int start,end,val;
        cin>>start>>end>>val;
        for(int i=start;i<=end;i++)
        {
            array[i]=array[i]+val;
        }
    }

    int numofquery;
    cin>>numofquery;

    while(numofquery--)
    {
        int index;
        cin>>index;

        cout<<array[index]<<endl;            
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
