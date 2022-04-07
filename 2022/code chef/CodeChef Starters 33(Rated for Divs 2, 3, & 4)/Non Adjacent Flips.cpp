#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    string str;
    cin>>str;

    int count=0;
    int flag=0;
    for(int i=0;i<num-1;i++){
        if(i==0)
        {
            if(str[i]=='1' && str[i+1]=='1')
            {
                count=2;
                break;
            }
            else if(str[i]=='1'){
                count=1;
            }
        }
        else if(i==num-1){
            if(str[i]=='1' && str[i-1]=='1')
            {
                count=2;
                break;
            }
            else if(str[i]=='1'){
                count=1;
            }
        }
        else{
            if(str[i]=='1' && str[i+1]=='1')
            {
                count=2;
                break;
            }
            else if(str[i]=='1')
                count=1;
            
        }
    }
    cout<<count<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
            solve();
    }

    return 0;
}
