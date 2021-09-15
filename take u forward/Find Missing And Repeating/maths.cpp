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

        vector<long long int> array;
        long long int arraySum = 0;
        long long int arraySquareSum = 0;
        for(long long int i=0;i<num;i++)
        {
            long long int temp;
            cin>>temp;
            arraySum+=temp;
            arraySquareSum+=pow(temp,2);
            array.push_back(temp);
        }

        long long int sum = (num*(num+1))/2;
        long long int squareSum = (num*(num+1)*( (2*num) + 1) )/6;

        long long int sumDifference = sum - arraySum;
        long long int XminusY = sumDifference;

        long long int SquareSumDifference = squareSum - arraySquareSum;
        
        long long int XplusY = SquareSumDifference / sumDifference;

        long long int X = (XplusY + XminusY)/2;
        long long int Y =  XplusY - X;

        cout<<" MISSING "<<X<<" "<<" extra "<<Y;
    }
    
    return 0;
}
