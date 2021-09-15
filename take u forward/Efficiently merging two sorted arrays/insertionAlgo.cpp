#include <bits/stdc++.h>
using namespace std;
int main()
{  
    vector<int> array1,array2;

    int num1,num2;
    cin>>num1>>num2;

    for(int i=0;i<num1;i++)
    {
        int temp;
        cin>>temp;
        array1.push_back(temp);
    }

    for(int i=0;i<num2;i++)
    {
        int temp;
        cin>>temp;
        array2.push_back(temp);
    }

    int i=0,j=0;

    while(i<array1.size() && j < array2.size() )
    {
        if(array1[i]>array2[j])
        {
            int temp = array1[i];
            array1[i] = array2[j];
            array2[j] = temp;
            i++;
            sort(array2.begin(),array2.end());  
            j=0;  
        }
        else
        {
            i++;
        }
    }
    
    
    for(int i=0;i<num1;i++)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<num2;i++)
    {
        cout<<array2[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
