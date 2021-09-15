#include <bits/stdc++.h>
using namespace std;

long long int calculate(long long int arr[3][3])
{
    int c=0;
    //Row
    if((arr[0][1]-arr[0][0])==(arr[0][2]-arr[0][1]))
        c++;
    if((arr[1][1]-arr[1][0])==(arr[1][2]-arr[1][1]))
        c++;
    if((arr[2][1]-arr[2][0])==(arr[2][2]-arr[2][1]))
        c++;
    
    //Column
    if((arr[1][0]-arr[0][0])==(arr[2][0]-arr[1][0]))
        c++;
    if((arr[1][1]-arr[0][1])==(arr[2][1]-arr[1][1]))
        c++;
    if((arr[1][2]-arr[0][2])==(arr[2][2]-arr[1][2]))
        c++;
        
    //Diagnol
    if((arr[1][1]-arr[0][0])==(arr[2][2]-arr[1][1]))
        c++;
    if((arr[1][1]-arr[0][2])==(arr[2][0]-arr[1][1]))
        c++;
    return c;
}
long long int solve()
{
    long long int array[3][3];

    for(int i=0;i<3;i++)
    {
        cin>>array[0][i];
    }
    cin>>array[1][0];
    cin>>array[1][2];
    for(int i=0;i<3;i++)
    {
        cin>>array[2][i];
    }

    int ans=0;
    array[1][1]=(array[1][0]+array[1][2])/2;
    int t=calculate(array);
    if(t>ans)
        ans=t;
    array[1][1]=(array[0][0]+array[2][2])/2;
    t=calculate(array);
    if(t>ans)
        ans=t;
    array[1][1]=(array[0][2]+array[2][0])/2;
    t=calculate(array);
    if(t>ans)
        ans=t;
        array[1][1]=(array[0][1]+array[2][1])/2;
    t=calculate(array);
    if(t>ans)
        ans=t;
    
    return ans;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
    long long int i=0;
    while (i < testCases)
    {
        long long int count = solve();
        cout<<"Case #"<<i+1<<": "<<count<<endl;
        i++;
    }

    return 0;
}
