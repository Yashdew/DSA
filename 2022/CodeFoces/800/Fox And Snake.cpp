#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int row,col;
    cin>>row>>col;
    int flag=0;
    vector<vector<char>> maxtrix;
    vector<char> array;
    for(int j=0;j<col;j++){
        array.push_back('#');
    }
    for(int i=0;i<row;i++){
        maxtrix.push_back(array);
    }
    char temp = '.';
    for(int i=1;i<row;i=i+2)
    {
        if(flag==0)
        {
            for(int j=0;j<col-1;j++){
                maxtrix[i][j] = temp;
            }
            flag=1;
        }
        else{
            for(int j=1;j<col;j++){
                maxtrix[i][j] = temp;
            }
            flag=0;
        }
        
    }

    for(int i=0;i<row;i++)
    {
        
        for(int j=0;j<col;j++){
            cout<<maxtrix[i][j];
        }
        cout<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    
    return 0;
}
