#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int D,C;
        cin>>D;
        cin>>C;
        vector<int> Day1,Day2;
        for(int i=0;i<3;i++)
        {
            int temp;
            cin>>temp;
            Day1.push_back(temp);
        }
        for(int i=0;i<3;i++)
        {
            int temp;
            cin>>temp;
            Day2.push_back(temp);
        }
        int sumday1 =  accumulate(Day1.begin(),Day1.end() ,0);
        int sumday2 =  accumulate(Day2.begin(),Day2.end() ,0);
        if(sumday1 >= 150 && sumday2 >= 150)
        {
            if( sumday1 + sumday2 + C < sumday1+sumday2+D+D)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

        else if(sumday1 < 150 && sumday2 < 150)
        {
            cout<<"NO"<<endl;
        }

        else if(sumday1 >= 150 && sumday2 < 150)
        {
            if(C<D)
            {
                cout<<"YES"<<endl;
            }
            else if(C>=D)
            {
                cout<<"NO"<<endl;
            }
        }
        else if(sumday1 < 150 && sumday2 >= 150)
        {
            if(C<D)
            {
                cout<<"YES"<<endl;
            }
            else if(C>=D)
            {
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
