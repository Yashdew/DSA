#include <bits/stdc++.h>
#include <numeric>
using namespace std;

int main() {
	
    int t;
    cin>>t;
    if(t>=1 && t<=100)
    {
        while(t--)
        {
            int N,X,Y;
            cin>>N>>X>>Y;
            if(N>=1 && X>=1 && Y>=1 && N<=pow(10,3) && X<=pow(10,3) && Y<=pow(10,3) && X<=Y)
            {
                int A[N];
                for(int i=0;i<N;i++)
                {
                    cin>>A[i];
                }
                int sum=0;
                if( accumulate(A, A+N, sum) < pow(10,4) )
                {
                    int count=0;
                    int flag=0;
                    if(N==2)
                    {
                        if( X<= A[0]+A[1] && Y>= A[0]+A[1])
                        {
                            cout<<"0"<<endl;
                            flag=1;
                            break;
                        }
                        else
                            flag=0;
                    }
                    else
                    {
                        for(int i=0;i<N-2;i++)
                        {
                            if( X<= A[i]+A[i+1] && Y>= A[i]+A[i+1] )
                            {
                                cout<<count<<endl;
                                flag=1;
                                break;
                            }

                            else
                            {
                                swap(A[i+1],A[i+2]);
                                count++;

                                if( X<= A[i]+A[i+1] && Y>= A[i]+A[i+1] )
                                {
                                    cout<<count<<endl;
                                    flag=1;
                                    break;
                                }
                            }
                        }
                    }
                    if(flag==0)
                    {
                        cout<<-1<<endl;
                    }
                }
                
            }
            
        }
    }
    
	return 0;
}
