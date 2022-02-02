#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;

    deque<int> qList;
    char maximum='a';
    for(int i=0;i<s.length();i++)
    {
        maximum = max(maximum,s[i]);
        qList.push_back(s[i]);
    }

    int flag=0;
    for(char i=maximum;i>='a';i--)
    {
        if(qList.size()==0)
        {
            cout<<"NO"<<endl;
            return;
        }
        if(qList.front()==i)
        {
            qList.pop_front();
        }
        else if(qList.back()==i)
        {
            qList.pop_back();
        }
        else
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    if(qList.size()!=0)
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
