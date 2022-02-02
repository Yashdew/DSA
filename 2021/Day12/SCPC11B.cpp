#include<bits/stdc++.h>
using namespace std;

int main() {
    int t=1,temp;
    vector<int> array;
    int i=0;
    while(t!=0)
    {
        cin>>t;
        for(i=0;i<t;i++)
        {
            cin>>temp;
            if(temp>=0 && temp<=1422)
            {
                array.push_back(temp);
            }
        }

        sort(array.begin(),array.end());

        int flag=0;
        for(int i=1; i<array.size(); i++)
        {
            
            if(i==t-1)
            {
                if( 1422-array[i]>100 )
                {
                    flag=1;
                    break;
                }
            }
            else
            {
                if( (array[i]-array[i-1]) >200)
                {
                    flag=1;
                    break;
                }
            }
            

        }

        if(flag==1)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            cout<<"POSSIBLE"<<endl;
        }
        
    }
}