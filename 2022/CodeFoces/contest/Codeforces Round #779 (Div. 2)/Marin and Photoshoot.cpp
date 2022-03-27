#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    string str;
    cin>>num>>str;

    int count = 0;
    for (int i = 0; i < num - 1; i++)
    {
        if (str[i] == '0' && str[i + 1] == '0')
        {
            count += 2;
        }
        else if (str[i] == '0' && str[i + 1] == '1' && str[i+2] == '0')
            count++;
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
