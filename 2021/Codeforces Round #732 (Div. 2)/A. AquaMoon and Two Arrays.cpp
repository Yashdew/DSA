#include <bits/stdc++.h>
using namespace std;
bool isequal(vector<int> A, vector<int> B)
{
    for(int i=0;i<A.size();i++)
    {
        if(A[i]!=B[i])
            return false;
    }
    return true;
}
void solve()
{
    int num;
    cin>>num;

    vector<int> A,B;
    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        A.push_back(temp);
    }
    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        B.push_back(temp);
    }

    vector<vector<int>> index;
    vector<int> pos;
    if(isequal(A,B))
    {
        cout<<0<<endl;
    }
    else
    {
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num;j++)
            {
                if(i!=j)
                {
                    if(A[i]!=B[i] && A[j]!=B[j])
                    {
                        if(A[i] < B[i] && A[j] > B[j])
                        {
                            while(1)
                            {
                                A[i] = A[i]+1;
                                A[j] = A[j]-1;
                                
                                pos.push_back(j+1);
                                pos.push_back(i+1);
                                index.push_back(pos);
                                pos.clear();
                                if(A[i]==B[i])
                                {
                                    break;
                                }
                                if(A[j]==B[j])
                                {
                                    break;
                                }
                            }
                        }
                        else if(A[i] > B[i] && A[j] < B[j])
                        {
                            while(1)
                            {

                                A[i] = A[i]-1;
                                A[j] = A[j]+1;
                                pos.push_back(i+1);
                                pos.push_back(j+1);
                                
                                
                                index.push_back(pos);
                                pos.clear();
                                if(A[i]==B[i])
                                {
                                    break;
                                }
                                if(A[j]==B[j])
                                {
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }

        if(isequal(A,B))
        {
            cout<<index.size()<<endl;
            for(int i=0;i<index.size();i++)
                cout<<index[i][0]<<" "<<index[i][1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
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
