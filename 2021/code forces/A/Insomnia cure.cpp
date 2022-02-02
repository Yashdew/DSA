#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;

    vector<int> array(d+1,1);

    int count=0;
    for(int i=1;i<=d;i++)
    {
        if(array[i]==1)
        {
            if(i%k==0)
            {
                array[i]=0;
                count++;
            }
            else if(i%l==0)
            {
                array[i]=0;
                count++;
            }
            else if(i%m==0)
            {
                array[i]=0;
                count++;
            }        
            else if(i%n==0)
            {
                array[i]=0;
                count++;
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
