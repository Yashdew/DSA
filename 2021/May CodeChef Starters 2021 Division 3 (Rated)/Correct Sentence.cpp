#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int k;
    vector<string> str;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        string temp;
        cin>>temp;
        str.push_back(temp);
    }
    
    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<str[i].length();j++)
        {
            if( islower(str[i][j]) && isupper(str[i][j+1]))
                return 0;
            if(isupper(str[i][j]) && islower(str[i][j+1]) )
                return 0;
            if( (int(str[i][j]) >=65 && 77>=int(str[i][j]) ) || ( (int(str[i][j]) >=110 && 122>=int(str[i][j])  ) ))
                return 0;
        }
    } 
    return 1;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int x = solve();
        if(x==0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
