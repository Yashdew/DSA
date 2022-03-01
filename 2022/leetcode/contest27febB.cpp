#include <bits/stdc++.h>
using namespace std;
long long minimumTime(vector<int>& time, int totalTrips) {
        
        int count = 0;
        int j=0;
        vector<int> timeTemplate(time.size(),0);
        while(count < totalTrips ){
            for(int i=0;i<time.size();i++){
                if(time[i] <= (i+1) ){
                    if((i+1)%time[i] == 0){
                        timeTemplate[i]++;
                    }  
                }
            }
            count = accumulate(timeTemplate.begin(), timeTemplate.end(), 0);
            cout<<count<<endl;
            
        }
        return j;
    }
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
   
    int totalTrips = 5;
    vector<int> time;
    time.push_back(1);
        time.push_back(2);
            time.push_back(3);
    cout<<minimumTime(time,totalTrips);
   
    return 0;
}