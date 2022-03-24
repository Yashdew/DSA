#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<long long> array;

    bool zero=0,ones=0;
    for(long long i=0;i<num;i++){
        long long temp;
        cin>>temp;
        if(temp==0)
            zero=1;
        else if(temp==1)
            ones=1;
        array.push_back(temp);
    }

    if(ones && zero)
        cout<<"NO"<<endl;
    
    else if(!ones)
        cout<<"YES"<<endl;
    else{

        bool oddNumber = false;
        sort(array.begin(),array.end());

        for(int i=0;i<num-1;i++){
            if(array[i]+1==array[i+1]){
                oddNumber=1;
              }
        }
        if(oddNumber){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
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
