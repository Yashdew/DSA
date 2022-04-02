#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<int> array;
    for(int i=0;i<num;i++){
        long long temp;
        cin>>temp;
        array.push_back(temp);
    }

    if(num==1 && array[0]==1){
        cout<<"YES"<<endl;
        return ;
    }
        
    else if(num==1 && array[0]>1){
        cout<<"NO"<<endl; 
        return;
    }
        
    sort(array.begin(),array.end());

    if( array[num-1] - array[num-2] > 1)
        cout<<"NO"<<endl;
    else
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
