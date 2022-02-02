#include <bits/stdc++.h>
using namespace std;

long long int isprime(long long int num){
   if (num <= 1)
      return 0;
   for (int i = 2; i <= num/2; i++)
   {
        if (num % i == 0)
        { 
            return 0; 
        }
   }
   return 1; 
}

int main()
{  

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int X, Y;
        cin>>X;
        cin>>Y;

        int flag=0;
        int count=0;

        if(X>=2)
        {
            if(Y!=1)
            {
                for(long long int i=2;i<=X;i++)
                {
                    if(isprime(i)==1)
                    { 
                        count++; 
                    }

                    if(count>=Y+1)
                    {
                        flag=1;
                        break;
                    }
                }
            }
            else if(Y==1)
            {
                if(X==2)
                {
                    count=1;
                }
                else if(X==1)
                {
                    count=0;
                }
                else if(X>2)
                {
                    count=2;
                }
            }
        }
        
        else if(X<2)
        {
            count=0;
        }   


        if(count<=Y)
        {
            cout<<"Chef"<<endl;
        }
        else if(count>Y)
        {
            cout<<"Divyam"<<endl;
        }
    }

    return 0;
}
