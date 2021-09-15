#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int array[1000][1000];
        int n,m;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>array[i][j];
            }
        }

        int minimum = INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if( i+3 < n )
                {
                    if( array[i][j]==array[i+1][j] && array[i][j]==array[i+2][j] && array[i][j]==array[i+3][j] )
                    {
                        minimum = min(minimum,array[i][j]);
                    }
                }
                
                if( j+3 < m )
                {
                    if(array[i][j]==array[i][j+1] && array[i][j]==array[i][j+2] && array[i][j]==array[i][j+3] )
                    {
                        minimum = min(minimum,array[i][j]);
                    }
                }

                if( i+3 < n && j+3 < m )
                {
                    if(array[i][j]==array[i+1][j+1] && array[i][j]==array[i+2][j+2] && array[i][j]==array[i+3][j+3])
                    {
                        minimum = min(minimum,array[i][j]);
                    }
                }
            }
        }
        
        cout<<minimum<<endl;
    }

    return 0;
}
