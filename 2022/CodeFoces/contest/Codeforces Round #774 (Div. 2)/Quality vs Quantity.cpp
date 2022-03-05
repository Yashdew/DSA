#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long nums;
    cin>>nums;

    vector<long long> array;

    while(nums--){
        long long temp;
        cin>>temp;

        array.push_back(temp);
    }

    sort(array.begin(),array.end());

    long long countRed = 0;
    long long countBlue = 0;
    long long sumRed = 0;
    long long sumBlue = 0;
    long long i=0;
    long long j = array.size()-1;
    while( i+1 < j)
    {
        countBlue=countBlue+2;
        sumBlue = sumBlue + array[i] + array[i+1];
        i=i+2;

        countRed++;
        sumRed = sumRed + array[j];
        j--;

        if( (countRed < countBlue) && (sumRed > sumBlue) ){
            cout<<"YES"<<endl;
            return;
        }

        if( i+1 > j)
        {
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"NO"<<endl;
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
