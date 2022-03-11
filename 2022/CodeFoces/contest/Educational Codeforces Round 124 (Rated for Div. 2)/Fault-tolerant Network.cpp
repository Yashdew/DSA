#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int  t;
    cin>>t;
    while(t--)
    {   
        long long int  n,i;
        long long int  v1,v2,v3,v4;
        cin>>n;
        vector<int> a,b;
        for(i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        for(i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            b.push_back(temp);
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                v1=abs(b[0]-a[i]);
                v2=abs(b[n-1]-a[i]);
            }
            else
            {
                if(abs(b[0]-a[i])<v1)
                {
                    v1=abs(b[0]-a[i]);
                }
                if(abs(b[n-1]-a[i])<v2)
                {
                    v2=abs(b[n-1]-a[i]);
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                v3=abs(a[0]-b[i]);
                v4=abs(a[n-1]-b[i]);
            }
            else
            {
                if(abs(a[0]-b[i])<v3)
                {
                    v3=abs(a[0]-b[i]);
                }
                if(abs(a[n-1]-b[i])<v4)
                {
                    v4=abs(a[n-1]-b[i]);
                }
            }
        }
        long long int  result=abs(a[0]-b[0])+abs(a[n-1]-b[n-1]);
        if(abs(a[0]-b[0])+v2+v4<result)
        {
            result=abs(a[0]-b[0])+v2+v4;
        }
        if(abs(a[n-1]-b[n-1])+v1+v3<result)
        {
            result=abs(a[n-1]-b[n-1])+v1+v3;
        }
        if(abs(a[n-1]-b[0])+abs(a[0]-b[n-1])<result)
        {
            result=abs(a[n-1]-b[0])+abs(a[0]-b[n-1]);
        }
        if(abs(a[0]-b[n-1])+v1+v4<result)
        {
            result=abs(a[0]-b[n-1])+v1+v4;
        }
        if(abs(a[n-1]-b[0])+v3+v2<result)
        {
            result=abs(a[n-1]-b[0])+v3+v2;
        }
        result=min(result,v1+v2+v3+v4);
        if(v1+v2+v3+v4<result)
        {
            result=v1+v2+v3+v4;
        }
        cout<<result<<endl;
    }
}