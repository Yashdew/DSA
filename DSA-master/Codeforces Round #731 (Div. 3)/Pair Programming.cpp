#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int k,n,m;
    cin>>k>>n>>m;

    vector<int> A(n,0);
    vector<int> B(m,0);
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }

    for(int i=0;i<m;i++)
    {
        cin>>B[i];
    }

    int i=0,j=0;

    vector<int> sequence;
    while(i<n || j<m)
    {
        if(i<n && j<m )
        {
            if(A[i]==0)
            {
                sequence.push_back(0);
                i++;
                k++;
            }
            else if(B[j]==0)
            {
                sequence.push_back(0);
                j++;
                k++;
            }
            else
            {
                if( (A[i] < B[j] ) && (A[i] <= k) )
                {
                    sequence.push_back(A[i]);
                    i++;
                }
                else if((A[i] >= B[j] ) && (B[j] <= k))
                {
                    sequence.push_back(B[j]);
                    j++;
                }
                else
                {
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        else if( i<n)
        {
            if(A[i]==0)
            {
                sequence.push_back(0);
                i++;
                k++;
            }
            else
            {
                if(A[i] <= k)
                {
                    sequence.push_back(A[i]);
                    i++;
                }
                else
                {
                    cout<<-1<<endl;
                    return;
                }
            }
        }
        else if( j<m)
        {
            if(B[j]==0)
            {
                sequence.push_back(0);
                j++;
                k++;
            }
            else
            {
                if(B[j] <= k)
                {
                    sequence.push_back(B[j]);
                    j++;
                }
                else
                {
                    cout<<-1<<endl;
                    return;
                }
            }
        }
    }

    for(int i=0;i<sequence.size();i++)
    {
        cout<<sequence[i]<<" ";
    }
    cout<<endl;
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
