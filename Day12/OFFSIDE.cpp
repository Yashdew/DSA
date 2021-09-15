#include<bits/stdc++.h>
using namespace std;

int main() {
	
    while(1)
    {
        int A,D;
        int flag=0;
        
        cin>>A>>D;
        if(A==0 || D==0)
            return 0;
        else if(A>=2 && D>=2 && A<=11 && D<=11)
        {
            int B[A]={0},C[D]={0};
            for(int i=0;i<A;i++)
            {
                cin>>B[i];
            }
            for(int i=0;i<D;i++)
            {
                cin>>C[i];
            }

            sort(B, B+A);
		    sort(C, C+D);

            if(B[0] < C[1]) 
                cout<<"Y\n";
	        else 
                cout<<"N\n";
        }
    }
	return 0;
}