#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<int> array;
    long long even=0,odd=0;
    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;
        if(temp%2==0){
            even++;
            array.push_back(1);
        }
        else{
            odd++;
            array.push_back(0);
        }
    }

    if(even==num || odd==num){
        cout<<"YES"<<endl;
        return;
    }

    for(int i=0;i<num-1;i++){
        if(array[i]==array[i+1]){
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
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
