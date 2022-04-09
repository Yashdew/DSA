#include <bits/stdc++.h>
using namespace std;
  

bool cmp(pair<string, int>& a,pair<string, int>& b)
{
    return a.second < b.second;
}
  

void sorting(map<string, int>& hashmap)
{

    vector<pair<string, int> > A;
  
    for (auto& it :hashmap) {
        A.push_back(it);
    }
  
    sort(A.begin(), A.end(), cmp);
  
    for (auto& it : A) {
  
        cout << it.first << ' '
             << it.second << endl;
    }
}
  
int main()
{
  
    map<string, int> hashmap;
  
    for(int i=0;i<100;i++){
         string temp;
         cin>>temp;
         hashmap[temp]++;
    }


    sorting(hashmap);
    return 0;
}