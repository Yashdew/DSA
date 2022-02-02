#include <iostream>
using namespace std;

void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
int main() {
	
    int t,n,i,j,ans,temp;
    int *arraym,*arrayw;
    cin>>t;
    
    
    while(t--)
    {
        cin>>n;
        if(n>=1 && n<=1000)
        {
            arraym = new int[n];

            for(i=0;i<n;i++)
                cin>>arraym[i];
            
            arrayw = new int[n];
            for(i=0;i<n;i++)
               cin>>arrayw[i];


            for (i = 0; i < n - 1; i++) 
            {
                int min_idx = i; 
                for (j = i + 1; j < n; j++) 
                    if (arraym[j] < arraym[min_idx]) 
                        min_idx = j; 
    
                swap(&arraym[min_idx], &arraym[i]); 
            } 

            for (i = 0; i < n - 1; i++) 
            {
                int min_idx = i; 
                for (j = i + 1; j < n; j++) 
                    if (arrayw[j] < arrayw[min_idx]) 
                        min_idx = j; 
    
                swap(&arrayw[min_idx], &arrayw[i]); 
            } 

            
            long long int sum=0;
            for(j=0;j<n;j++)
            {
                sum+=(arraym[j]*arrayw[j]);
            }
            cout<<sum<<endl;
        }
        
    }
}

 