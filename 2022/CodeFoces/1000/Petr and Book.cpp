#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int pages;
    cin>>pages;
    vector<int> read;

    for(int i=1;i<=7;i++)
    {
        int temp;
        cin>>temp;
        read.push_back(temp);
    }

    int i=0;
    while(pages!=0)
    {
        pages = pages - read[i];
        i++;

        if(pages<=0)
            break;
        
        if(i==read.size() && pages!=0)
            i=0;
    }

    cout<<i<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();

    return 0;
}
