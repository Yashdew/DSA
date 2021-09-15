#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int  nums;
        cin>>nums;
        vector<int> array;

        for(int i=0;i<nums;i++)
        {
            int temp;
            cin>>temp;
            array.push_back(temp);
        }
       
        vector<int> arraycopy = array;
        sort(arraycopy.begin(),arraycopy.end(),greater<int>());

        int realarray[array.size()]={0};
        int count=1;
        for(int i=0;i<arraycopy.size();i++)
        {
            for(int j=0;j<array.size();j++)
            {
                if(arraycopy[i]==array[j] && realarray[j]==0)
                {
                    realarray[j]=count;
                    count=count+1;
                    break;
                }
            }
        }

        for(int i=0;i<array.size();i++)
        {
            cout<<realarray[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
