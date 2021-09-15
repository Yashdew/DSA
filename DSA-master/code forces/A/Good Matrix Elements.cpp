#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    int array[num][num];

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cin>>array[i][j];
        }
    }

    int center = array[num/2][num/2];

    //cout<<endl;
    int sum=0;
    for(int i=0;i<num;i++)
    {
        //cout<<array[num/2][i]<<" ";
        sum = sum + array[num/2][i];
    }
    sum = sum-center;
    //cout<<endl;
    for(int i=0;i<num;i++)
    {
        //cout<<array[i][num/2]<<" ";
        sum = sum  + array[i][num/2];
    }
    sum = sum-center;
    //cout<<endl;
    for(int i=0,j=0;i<num,j<num;i++,j++)
    {
        //cout<<array[i][j]<<" ";
        sum = sum + array[i][j] ;
    }
    sum = sum-center;
    //cout<<endl;
    for(int i=0,j=num-1;i<num,j>=0;i++,j--)
    {
        //cout<<array[i][j]<<" ";
        sum = sum + array[i][j] ;
    }
    // cout<<endl;
    // cout<<sum<<" "<<center<<endl;
    //sum = sum - (3*center);

    cout<<sum<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
