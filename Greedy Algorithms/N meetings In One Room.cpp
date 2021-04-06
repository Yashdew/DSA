#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main()
{ 
    vector<long long int> arrayA,arrayB;
    arrayA.push_back(1);
    arrayA.push_back(0);
    arrayA.push_back(3);
    arrayA.push_back(8);
    arrayA.push_back(5);
    arrayA.push_back(8);

    arrayB.push_back(2);
    arrayB.push_back(6);
    arrayB.push_back(4);
    arrayB.push_back(9);
    arrayB.push_back(7);
    arrayB.push_back(9);
    
    //priority_queue< pair< pair<int, int>,<int> > >values;
    //vector<pair<pair<int, int>,int> array;
    priority_queue< P, vector<P>, greater<P> > values;
    //priority_queue<pair<pair<int, int>, int>> values;
    for(int i=0;i<arrayA.size();i++)
    {
        //make_pair(arrayB[i],arrayA[i])
        values.push( make_pair( make_pair(arrayB[i],arrayA[i]),i) );
    }
     while (!values.empty()) {
        cout << values.top().first
             //<< " " << values.top().first.second
             << " " << values.top().second
             << endl;
        values.pop();
    }
    //  while (!values.empty()) {
    //     cout << values.top().first.first
    //          <<" "  <<values.top().first.second
    //          << " " << values.top().second
    //          << endl;
    //     values.pop();
    // }



    return 0;
}
