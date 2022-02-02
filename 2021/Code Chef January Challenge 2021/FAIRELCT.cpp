#include <bits/stdc++.h>
using namespace std;

int main() {
	
    int t;
    int count=0;
    cin>>t;
    if(t>=1 && t<=pow(10,3))
    {
        while(t--)
        {
            int N,M;
            vector<int> A,B;
            int temp;
            int sumA=0;
            int sumB=0;
            int count = 0;
            cin>>N>>M;

            if(N>=1 && M>=1 && N<=pow(10,3) && M<=pow(10,3))
            {
                for(int i=0;i<N;i++)
                {
                    cin>>temp;
                    A.push_back(temp);
                }
                
                for(int i=0;i<M;i++)
                {
                    cin>>temp;
                    B.push_back(temp);
                }

                sort(A.begin(),A.end());
                sort(B.begin(),B.end());
                sumA=accumulate(A.begin(), A.end(), 0);
                sumB=accumulate(B.begin(), B.end(), 0);
                while(1)
                {
                    if(sumA>sumB)
                    {
                        cout<<0<<endl;
                    }
                    
                    else if(A.begin()==B.end() && sumA>sumB)
                    {
                        cout<<0<<endl;
                    }
                    else if(A.begin()==B.end() && sumA<=sumB)
                    {
                        cout<<-1<<endl;
                    }

                     else 
                    {
                        int i=0;
                        int j=M-1;
                        
                        while(i<N && j>=0)
                        {
                            if(A[i]<B[j])
                            {
                                sumA = (sumA - A[i]) + B[j];
                                sumB = (sumB - B[j]) + A[i];
                                count++;
                            }
                            else 
                                break;
                            
                            if(sumA>sumB)
                            {
                                break;
                            }
                            else
                            {
                                i++;
                                j--;
                            }
                        }
                        
                        if(sumA>sumB)
                        {
                            cout<<count<<endl;
                            break;
                        }
                        else
                        {
                            cout<<-1<<endl;
                        }
                        
                    }

                }
            }
        }
        
    }
    
	return 0;
}

