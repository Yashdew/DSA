#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    vector<int> array;
    int count=0;
    while(num!=0){
        int temp = num%10;
        temp = temp * pow(10,count);
        if(temp!=0)
            array.push_back(temp);
        count++;
        num = num/10;
    }   

    cout<<array.size()<<endl;
    for(int i=0;i<array.size();i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
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
