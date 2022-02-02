#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        string chef,computer;
        cin>>chef;
        cin>>computer;

        for(int i=0;i<computer.size();i++)
        {
            int k=i+1;
            if(computer[i]==computer[k])
            {
                while(computer[i]==computer[k])
                {
                    
                    for(int j=k;j<computer[j]!='\0';j++)
                    {
                        computer[j]=computer[j+1];
                    }
                    k++;
                }
            }
            
        }
        cout<<computer;
    }

    return 0;
}
