#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int countA=0,countB=0;

    vector<int> A;
    vector<int> B;

    for(int i=0;i<3;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }    
    for(int i=0;i<3;i++)
    {
        int temp;
        cin>>temp;
        B.push_back(temp);
    }   

    for(int i=0;i<3;i++)
    {
        if(A[i] > B[i])
            countA++;
        else if(B[i] > A[i])
            countB++;
    } 

    if(countA > countB)
        cout<<"A"<<endl;
    else
        cout<<"B"<<endl;
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
