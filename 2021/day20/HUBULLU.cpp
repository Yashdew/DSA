#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int n;
        cin>>n;
        int array=0;
        // set <int> array;
        // for(long long int i=0;i<n;i++)
        // {
        //     int temp;
        //     cin>>temp;
        //     array.insert(temp);
        // }

        // if(array[array.size()-1]==0)
        // {
        //     cout<<"Airborne wins."<<endl;
        // }
        // else
        // {
        //     cout<<"Pagfloyd wins."<<endl;
        // }

        while(n--)
        {
            cin>>array;
        }

        if(array==0)
        {
            cout<<"Airborne wins."<<endl;
        }
        else
        {
            cout<<"Pagfloyd wins."<<endl;
        }
    }

    return 0;
}
