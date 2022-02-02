#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int num;
        cin>>num
        long long int array[num][num];

        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num;j++)
            {
                cin>>array[i][j];
            }   
        }

        int count=0;
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num;j++)
            {
                int min = array[i][j]
                for(int k=i;k<num;k++)
                {
                    for(int l=j;l<num;l++)
                    {
                        if(i<=k && j<=l)
                        {
                            if ( min > array[k][l])
                            {
                                count++;
                            }
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
