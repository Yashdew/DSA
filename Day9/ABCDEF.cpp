#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int n,lo,hi;
    vector<int> s1,s2;
    int arrayx[1000];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arrayx[i];
    }
        
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                s1.push_back((arrayx[i]*arrayx[j])+arrayx[k]);
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if (arrayx[k]==0) continue;
                s2.push_back((arrayx[i]+arrayx[j])*arrayx[k]);
            }
        }
    }
        
                
    sort( s1.begin(),s1.end() );
    sort( s2.begin(),s2.end() );

    long long result=0;
    for(int i=0;i<s1.size();i++)
    {
        lo = lower_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
        hi = upper_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
        result=result+(hi-lo);
    }

    cout<<result<<endl;
    return 0;
}