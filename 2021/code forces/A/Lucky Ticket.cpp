#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int numSize;
    string number;
    cin>> numSize;
    cin>>number;

    bool flag=true;
    int sum=0;
    numSize = numSize/2;
    for(int i=0;i<numSize;i++)
    {
        if( (number[i]!='4' && number[i]!='7') || (number[numSize+i]!='4' && number[numSize+i]!='7')  )
        {
            flag=false;
            break;
        }

        sum = sum +(number[i] - number[numSize+i] );
    }
    flag = flag & (sum==0);
    if(flag == true)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
