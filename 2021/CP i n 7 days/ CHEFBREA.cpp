#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int l,b;
        cin>>l;
        cin>>b;
        int i=1;
        int number = 0;
        vector <int> num;
        if(l==b)
        {
            cout<<1<<endl;
        }
        else
        {
            while( pow(i,2) < l*b )
            {
                if( (l*b) % (i*i) == 0 )
                {
                    number = (l*b) / (i*i);
                    num.push_back(number);
                }
                i++;
            }
            cout<<*min_element(num.begin(),num.end());
        }
    
    }

    return 0;
}
