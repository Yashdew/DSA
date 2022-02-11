#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> puzzle;

    while(m--)
    {
        int temp;
        cin>>temp;
        puzzle.push_back(temp);
    }

    sort(puzzle.begin(),puzzle.end());

    int minimum = INT_MAX;
    for(int i=0;i<puzzle.size();i++)
    {
        if( n-1+i < puzzle.size() )
            minimum = min(minimum,puzzle[n-1+i] - puzzle[i] );
    }

    cout<< minimum<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
