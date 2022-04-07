#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<int> even;
    vector<int> odd;

    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;

        if(temp%2==0)
            even.push_back(temp);
        else if(temp%2!=0)
            odd.push_back(temp);
    }

    if(odd.size()==0 || even.size()==0){
        cout<<0<<endl;
        return;
    }

    if(odd.size() == even.size()){
        if(odd.size()%2==0){
            cout<< odd.size()/2<<endl;
            return;
        }

        else{
            cout<<(even.size() + odd.size() )/2<<endl;
            return;
        }
    }
    else{
        int x = even.size();
        int y = odd.size();
        
        if( x <= y){
            cout<< min(even.size(),odd.size())/2<<endl;
            return;
        }
        else{
            int sum = abs(x-y);
            cout<< min(even.size(),odd.size()) + sum<<endl;
            return;
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
