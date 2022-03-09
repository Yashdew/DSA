#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int row,col;
    cin>>row>>col;

    vector<vector<char>> array;
    vector<char> subArray;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            char temp;
            cin>>temp;
            subArray.push_back(temp);
        }
        array.push_back(subArray);
        subArray.clear();
    }


    int count=0;
    for(int j=0;j<col;j++)
    {
        if(array[row-1][j]=='D')
            count++;
    }

    for(int i=0;i<row;i++)
    {
        if(array[i][col-1]=='R')
            count++;
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
