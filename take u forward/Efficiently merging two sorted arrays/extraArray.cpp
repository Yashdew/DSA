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

    //int num3 = array1.size() + array2.size();
    vector<int> array3;
    int i=0,j=0;
    while( i<array1.size() && j<array2.size() )
    {
        if( array1[i] <= array2[j]  )
        {
            array3.push_back(array1[i]);
            i++;
        }
        else
        {
            array3.push_back(array2[j]);
            j++;
        }
    }

    while( i<array1.size() )
    {
        array3.push_back(array1[i]);
        i++;
    }
    while( j<array2.size() )
    {
        array3.push_back(array2[j]);
        j++;
    }

    array1.clear();
    array2.clear();
    for(int i=0;i<num1;i++)
    {
        array1.push_back(array3[i]);
    }
    for(int i=num1;i<array3.size();i++)
    {
        array2.push_back(array3[i]);
    }

    for(int i=0;i<array1.size();i++)
        cout<<array1[i]<<" ";
    cout<<endl;

    for(int i=0;i<array2.size();i++)
        cout<<array2[i]<<" ";
    cout<<endl;
    return 0;
}
