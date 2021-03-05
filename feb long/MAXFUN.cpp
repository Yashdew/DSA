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
        long long int array[num];
        for(int i=0;i<num;i++)
        {
            cin>>array[i];
        }

        long long int max = *max_element(array, array + num);
        long long int min = *min_element(array, array + num); 
        cout<<2*(max-min)<<endl;
    }

    return 0;
}
