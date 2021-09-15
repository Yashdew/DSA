#include <bits/stdc++.h>
using namespace std;
int solve()
{
    long long int N,K;
    cin>>N>>K;
    string str;
    cin>>str;

    int count=0;
    int len = str.length();
    for(int i=0;i<=len/2;i++)
    {
        if(str[i]!=str[len-i+1])
            count++;
    }

    if(count==K)
        return 0;
    else if(count>K)
        return count-K;
    else if(count<K)
        return K-count;
}
int main()
{  
    int testCases;
    cin >> testCases;
    int i=1;
    while (testCases--)
    {
        cout<<"Case #"<<i<<": "<<solve()<<endl;
        i++;
    }

    return 0;
}
