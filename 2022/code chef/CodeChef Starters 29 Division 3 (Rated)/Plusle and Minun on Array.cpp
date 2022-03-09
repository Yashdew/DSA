#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<long long> arrayNeg,arrayPos;
    long long  i=1;

    long long maximum = INT_MIN;
    long long minimum = INT_MAX;
    long long sum=0,evenIndex=0,oddIndex=0;
    while(i<=num){
        long long temp;
        cin>>temp;
        temp = abs(temp);
        if(i%2==0)
        {
            arrayNeg.push_back(temp);
        }
        else{
           arrayPos.push_back(temp);
        }
        i++;
    }
    sort(arrayNeg.begin(),arrayNeg.end());
    sort(arrayPos.begin(),arrayPos.end());
    if(arrayNeg[arrayNeg.size() - 1] > arrayPos[0])
        swap(arrayNeg[arrayNeg.size() - 1], arrayPos[0]);

    for(auto x: arrayPos) sum += x;
    for(auto x: arrayNeg) sum -= x;
    cout<<sum<<endl;
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
