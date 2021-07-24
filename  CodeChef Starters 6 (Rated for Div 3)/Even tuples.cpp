#include <bits/stdc++.h>
using namespace std;


int fact(int n)
{
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
 


void solve()
{
    int num,q;
    cin>>num>>q;

    vector<int> array;

    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }

    vector<int> odd(num+1,0);
    vector<int> even(num+1,0);

    int countodd=0;
    for(int i=1;i<=num;i++)
    {
        if(array[i-1]%2!=0)
        {
            countodd++;
        }
        odd[i] = countodd;
    }

    int counteven=0;
    for(int i=1;i<=num;i++)
    {
        if(array[i-1]%2==0)
        {
            counteven++;
        }
        even[i] = counteven;
    }
    
    while(q--)
    {
        int L,R;
        cin>>L>>R;

        counteven = even[R] - even[L-1];
        countodd = odd[R] - odd[L-1];

        int sum = nCr(counteven,3) + (nCr(countodd,2) * nCr(counteven,1));

        cout<<sum<<endl; 
    }
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
