#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int main() {

    int a[100];
    a[0]=1;
    a[1]=0;
    a[2]=3;
    a[3]=0;
    int n;
    for(int i=4;i<31;i++)
    {
        a[i]= (a[i-2]*4)-a[i-4];
    }
    while(1)
    {
        cin>>n;
        if(n!=-1)
        {
            cout<<a[n]<<endl;
        }
        else
        {
            return 0;
        }
        
    }
    return 0;
}