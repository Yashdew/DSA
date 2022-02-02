#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int number;
    cin >> number;
    vector<int> array;
    for(int i=1;i<=10;i++)
    {
        if(number%i==0)
        {
            array.push_back(i);
        }
    }
    cout<<*max_element(array.begin(), array.end())<<endl;
    return 0;
}
