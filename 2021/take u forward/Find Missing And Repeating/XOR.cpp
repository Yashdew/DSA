#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int num;
        cin>>num;

        vector<long long int> array;
        long long int xorAll=0,xorArray=0;
        
        for(long long int i=1;i<=num;i++)
        {
            long long int temp;
            cin>>temp;
            xorAll^=i;
            xorArray^=temp;
            array.push_back(temp);
        }

        long long int XOR = xorAll^xorArray;
        long long int missing=0;
        long long int extra=0;
        long long int r=0;
        //cout<<XOR<<endl;
        while(!(( XOR>>r )&1) )
        {
            r++;
        }
        vector<long long int> stack1,stack2;
        for(long long int i=1;i<=num;i++)
        {
            if( (i>>r)&1 )
                stack1.push_back(i);
            else
                stack2.push_back(i);
            
            if((array[i-1]>>r)&1) 
                stack1.push_back(array[i-1]);
            else
                stack2.push_back(array[i-1]);
        }

        for(long long int i=0;i<stack1.size();i++)
        {
            missing^=stack1[i];
        }
        
        for(long long int i=0;i<stack2.size();i++)
        {
            extra^=stack2[i];
        }
        for(int i=0;i<num;i++){
            if(array[i]==extra){
                missing=missing; 
                extra=extra; 
                break;
            }else if(array[i]==missing){
                long long int temp = missing;
                missing = extra; 
                extra=temp;  break;
            }
        }
        cout<<" MISSING "<<missing<<" "<<" extra "<<extra;
    }
    return 0;
}
