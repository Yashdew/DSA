#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--)
    {
        int num,flag=1;
        cin>>num;
        while(num!=0)
        {
            if(num%2==0)
            {
                int x=num%10;
                if(x==0)
                {
                    if(num-2020>0)
                    {
                        num=num-2020;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                else
                { 
                    if(num-2021>0)
                    {
                        num=num-2021;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }
            else
            {
                int x=num%10;
                if(x==1)
                {
                    if(num-2021>0)
                    {
                        num=num-2021;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                else
                { 
                    if(num-2020>0)
                    {
                        num=num-2020;
                    }
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }

            if(flag==0)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}