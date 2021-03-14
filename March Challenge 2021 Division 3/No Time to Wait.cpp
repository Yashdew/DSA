#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int N,H,x;
    cin>>N>>H>>x;

    vector<int> T;
    for(int i=0;i<N;i++)
    {
        int temp;
        cin>>temp;
        t.push_back(temp);
    }

    int flag=0;
    for(int i=0;i<N;i++)
    {
        if( t[i]+x >=H )
        {
            flag=1;
            break;
        }

    }

    if(flag==1)
    {
        cout<<"YES"<<endl;
    }
    else if(flag==0)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
