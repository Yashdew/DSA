#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    int indexmin = 0;
    int indexmax = 0;
    int minValue = 101;
    int maxValue = 0;

    for(int i=0;i<num;i++)
    {
        int x;
        cin>>x;

        if(x>maxValue)
        {
            indexmax = i;
            maxValue = x;
        }
        if(x<=minValue)
        {
            indexmin = i;
            minValue = x;
        }
    }

    if(indexmax > indexmin )
    {
        cout<< (indexmax - 1) + (num - indexmin) -1<<endl;
    }
    else
    {
        cout<< (indexmax - 1) + (num - indexmin)<<endl;
    }
}   
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
