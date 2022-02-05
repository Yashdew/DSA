#include <bits/stdc++.h>
using namespace std;
int solve()
{
    string str, sampleStr = "hello";
    cin>>str;

    int j=0;
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i] == sampleStr[j])
        {
            j++;
            count++;

            if(count==5)
            {
                return 1;
            }
        }
    }
    return 0;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    if(solve())
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
