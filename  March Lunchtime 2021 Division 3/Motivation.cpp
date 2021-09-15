#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int num;
        long long int X;
        cin>>num>>X;
        //vector<int> space;
        vector<int> rating;

        for(long long int i=0;i<num;i++)
        {
            long long int tempSpace,tempRating;
            cin>>tempSpace>>tempRating;

            if( tempSpace <= X )
            {
                rating.push_back(tempRating);      
            }
        }

        cout<<*max_element(rating.begin(),rating.end())<<endl;
    }

    return 0;
}
