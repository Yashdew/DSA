#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<int> array;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        array.push_back(temp);
    }

    long long odd=0,even=0;
    for(int i=0;i<num;i++)
    {
        if( i%2 !=array[i]%2)
        {
            if(array[i]%2==1)
                odd++;
            else
                even++;
        }
    }

    if(odd!=even)
        cout<<-1<<endl;
    else
        cout<<even<<endl;
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
