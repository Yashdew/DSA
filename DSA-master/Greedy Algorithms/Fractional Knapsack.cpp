#include <bits/stdc++.h>
using namespace std;
int solve()
{
    vector<int> value{60,100};
    vector<int> weight{10,20};
    int W = 50;
    map<double,int,greater<int>> hashmap;
    vector<int> array;
        for(int i=0;i<value.size();i++)
        {
            double price = value[i]/weight[i];
            hashmap[price]=weight[i];
        }
        //sort(hashmap.begin(),hashmap.end());
        double sum=0;
        auto itr=hashmap.begin();
        while(W>0 && itr!=hashmap.end())
        {
            if(itr->second==0)
            {
                itr++;
            }
            else
            {
                sum = sum + (1*(itr->first));
                array.push_back(sum);
                hashmap[itr->first]--;
                W = W - 1;
                
            }
        }
        
        return sum;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        cout<<solve()<<endl;
    }

    return 0;
}
