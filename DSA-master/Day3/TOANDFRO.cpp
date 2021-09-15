#include <bits/stdc++.h> 
using namespace std;

int main() {
    
    int input=1;
    int i,j,m,x=0,y=0;
    int temp;
    int n;
    string string1;
    char array[200][200];
    
	while(input!=0)
    {
       cin>>input;
       if(input>=2 && input<=20)
       {
           cin>>string1;
           if(string1.size()<=200)
           {
                n=string1.size()/input;
                // if(n-int(n)!=0)
                // {
                //     n=int(n)+1;
                //     cout<<n<<endl;
                // }
                //reverse(string1.begin(),string1.end());
                x=0;
                for(i=0;i<n;i++)
                {
                    if(i%2==0)
                    {
                            for(j=0,m=x;j<input,m<x+input;j++,m++)
                            {
                                array[i][j]=string1[m];
                            }    
                            x=x+input;
                    }
                    else
                    {
                            for(j=input-1,m=x;j>=0,m<x+input;j--,m++)
                            {
                                array[i][j]=string1[m];
                            } 
                            x=x+input; 
                    }
                    
                }
               
                for(j=0;j<input;j++)
                {
                    for(i=0;i<n;i++)
                    {
                        
                        cout<<array[i][j];
                    }
                    
                }
            }
           //input=0;
       }
       
    }
	return 0;
}