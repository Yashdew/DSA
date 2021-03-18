#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int N,H,x;
    cin>>N>>H>>x;

    int T[N];
    for(int i=0;i<N;i++)
    {
        cin>>T[i];
    }

    int flag=1;
    for(int i=0;i<N;i++)
    {
        if( H  <= T[i]+x  )
        {
            flag=0;
            break;
        }

    }

    if(flag==0)
    {
        cout<<"YES"<<endl;
    }
    else if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
