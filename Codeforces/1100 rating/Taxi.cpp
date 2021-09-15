#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int groups;
    cin>>groups;
    int sum=0;
    for(int i=0;i<groups;i++)
    {
        int temp;
        cin>>temp;
        sum+=temp;
    }
    if(sum%4==0)
        cout<<sum/4<<endl;
    else
        cout<<(sum/4) + 1<<endl;
    return 0;
}
