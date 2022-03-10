#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    vector<int> array(num,0);
    vector<vector<int>> matrix;
    vector<int> subMatrix;
    for(int i=0;i<num;i++)
    {
        array[i] = i+1;
    }

    int i=num-1;
    cout<<2<<endl;
    while(array.size()>1 ){
        int a = array[array.size()-1];
        array.pop_back();
        int b = array[array.size()-1];
        array.pop_back();
        cout<<a<<" "<<b<<endl;
        int c=a+b;
        if(c&1)
            c++;
        c/=2;
        array.push_back(c);
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
