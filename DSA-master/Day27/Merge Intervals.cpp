#include <bits/stdc++.h>
using namespace std;
void printArray(vector<vector<int>> mergeIntervals)
{
    for(int i=0 ; i< mergeIntervals.size() ; i++)
    {
        for(int j=0 ; j<mergeIntervals[i].size() ; j++)
        {
            cout<<mergeIntervals[i][j]<<" , ";
        }
        cout<<endl;
    }
}

 vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int lowerlimit;
        int upperlimit;
        vector<int> tempArray;
        vector<vector<int>> mergeIntervals;
        lowerlimit = intervals[0][0];
        upperlimit = intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(lowerlimit <= intervals[i][0] && intervals[i][0]<=upperlimit)
            {
                if(upperlimit < intervals[i][1])
                {
                    upperlimit = intervals[i][1];
                }
                else
                    continue;
            }
            else
            {
                tempArray.push_back(lowerlimit);
                tempArray.push_back(upperlimit);
                mergeIntervals.push_back(tempArray);
                tempArray.clear();
                lowerlimit = intervals[i][0];
                upperlimit = intervals[i][1];
            }
        }
        tempArray.push_back(lowerlimit);
        tempArray.push_back(upperlimit);
        mergeIntervals.push_back(tempArray);
        tempArray.clear();
        return mergeIntervals;
    }

int main()
{  
    vector<int> tempArray;
    vector<vector<int>> mergeIntervals;

    int num;
    cin>>num;

    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        tempArray.push_back(temp);
        cin>>temp;
        tempArray.push_back(temp);
        mergeIntervals.push_back(tempArray);
        tempArray.clear();
    }

    printArray(mergeIntervals);
    vector<vector<int>> intervals = merge(mergeIntervals);
    cout<<endl;
    printArray(intervals);
    return 0;
}
