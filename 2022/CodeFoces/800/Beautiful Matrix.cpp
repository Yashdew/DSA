#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int matrix[5][5];

    int x=0,y=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            int temp;
            cin>>temp;
            matrix[i][j] = temp;
            if(temp==1)
            {
                x = i;
                y = j;  
            }
        }
    }

    if(x == 0 && y ==0)
        cout<<4<<endl;
    else if(x == 4 && y ==4)
        cout<<4<<endl;
    else if(x==1 && y==1)
        cout<<2<<endl;
    else if(x==3 && y==3)
        cout<<2<<endl;
    else if( (x==1 && y==0) || (x==0 && y==1) || (x==4 && y==3) || (x==3 && y==4))
        cout<<3<<endl;
    else{
        cout<<abs(x-y)<<endl;
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
