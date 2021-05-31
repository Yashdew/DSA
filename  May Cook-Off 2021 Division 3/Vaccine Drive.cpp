#include <bits/stdc++.h>
using namespace std;
int solve()
{
    long long int groupnum;
    long long int perdayLimit;
    vector <long long int> peopleArray;
    
    cin>>groupnum>>perdayLimit;
    int numberofdays=0;
    for(int i=0;i<10;i++)
    {
        int temp;
        cin>>temp;
        peopleArray.push_back(temp);
    }
    int i=peopleArray.size()-1;
    while(i>=0)
    {
        if(peopleArray[i]>=perdayLimit)
        {
            while(peopleArray[i] >= perdayLimit )
            {
                peopleArray[i] = peopleArray[i]-perdayLimit;

            }
            if(peopleArray[i])
            peopleArray[i]=peopleArray[i]-perdayLimit;
        }
            
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        solve();
    }

    return 0;
}
