#include <bits/stdc++.h>
using namespace std;
void solve(int i)
{
    long long int len;
    cin>>len;
    string str;
    cin>>str;
    cout<<"Case #"<<i<<": ";
    int count=0;
    for(int i=0;i<len;i+=count)
    {
        count=1;
        for(int j=i;j<len;j++)
        {
            if(str[j+1] > str[j])
            {
                cout<<count<<" ";
                count++;
            }
            else
            {
                cout<<count<<" ";
                break;
            }
        }
    }
    cout<<"\n";
}
int main()
{  
    int testCases;
    cin >> testCases;
    int i=1;
    while (testCases--)
    {
        solve(i);
        i++;
    }
    return 0;
}
