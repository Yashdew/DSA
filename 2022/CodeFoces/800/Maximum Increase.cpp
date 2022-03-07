#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    vector<int> array;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;

        array.push_back(temp);
    }

    long long count=1,max=1;
    for(int i=1;i<num;i++){
        if(array[i] > array[i-1])
            count++;
        else{
            if(count > max)
                max=count;
            count=1;
        }
    }

    if(count > max){
        max = count;
    }

    cout<<max<<endl;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
