#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    int i=0;
    int sum=0;
    while(i<num){
        int temp;
        cin>>temp;
        sum+=temp;
        i++;
    }

    int ans=0;
    for(int i=1;sum >= (i*(i+1))/2;i++){
        long long temp = (i*(i+1))/2;

        if(temp<=sum){
            ans=i;
        }
        else
            break;
    }

    cout<<ans<<endl;

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
