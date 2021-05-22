#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int n;
        cin>>n;
        int x;
        cin>>x;
        vector<int> array;
        int grand=0;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            array.push_back(temp);
            grand+=temp;
        }
        int sum=0;
        int flag=1;
        int danger=0;
        if(grand!=x)
        {
            while(1)
            {
                for(int i=0;i<array.size();i++)
                {
                    sum+=array[0];
                    if(sum==x)
                    {
                        danger=i;
                        flag=1;
                    }
                }
                if(flag==1)
                {
                    while()
                    int temp=array[array.size()-1];
                    for(int i=0;i<array.size()-1;i++)
                    {
                        array[i+1]=array[i];
                    }
                    array[0]=temp;
                }
                
            }
            
            if(array[0]>x)
            {
                cout<<"YES"<<
            }    
        //    sort(array.begin(), array.end(), greater<int>());
        //    if(array[0]==x)
        //    {
        //        cout<<"NO"<<endl;
        //    }
        //    else
        //    {
        //        cout<<"YES"<<endl;
        //        for(int i=0;i<array.size();i++)
        //             cout<<array[i]<<" ";
        //        cout<<endl;
        //    }
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
