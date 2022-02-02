#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    int max = 0;
    int min = INT_MIN;
    int count = 0;
    for(int i=0;i<num;i++)
    {
        int x;
        cin>>x;
        if(i==0)
        {
            min = x;
            max = min;
        }
        else
        {
            if(x > max)
            {
                max = x;
                count++;
            }
            else if( x < min)
            {
                count++;
                min = x;
            }
        }
    }
    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
    return 0;
}
