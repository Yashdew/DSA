#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int main() {
	// your code goes here
    int n,q;
    int d1Array[MAX];
    int d2Array[MAX][MAX];

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>d1Array[i];
    }

    cin>>q;
    for(int i=0;i<q;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>d2Array[i][j];
        }
    }

    
    for(int i=0;i<q;i++)
    {
        int j=d2Array[i][0]-1;
        int count=0;
        
        do{
            
            if(d1Array[j]==d1Array[j+1])
            {
                j=j+2;
            }
            else if(d1Array[j]!=d1Array[j+1])
            {
                count++;
                j++;
            }
            else
            {
                count++;
            }
            
        }while(j!=d2Array[i][1]-1);
        cout<<count<<endl;
    }



	return 0;
}