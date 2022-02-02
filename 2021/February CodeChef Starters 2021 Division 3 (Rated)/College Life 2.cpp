#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int season;
        cin>>season;
        vector<long long int> Q;
        for(long long int i=0; i<season; i++)
        {
            long long int temp;
            cin>>temp;
            Q.push_back(temp);
        }
        
        vector<long long int> series;
        for(long long int i=0; i<season; i++)
        {
            int numofepisode;
            cin>>numofepisode;
            vector<long long int> episode;
            long long int firstmust;
            cin>>firstmust;
            for(long long int j=1;j<numofepisode;j++)
            {
                long long int temp;
                cin>>temp;
                temp = temp - Q[i];
                episode.push_back(temp);
            }
            episode.push_back(firstmust);
            series.push_back(accumulate(episode.begin(),episode.end() ,0));
            episode.clear();
        }
        cout<<accumulate(series.begin(),series.end() ,0)<<endl;
    }

    return 0;
}
