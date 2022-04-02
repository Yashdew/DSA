#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long array[4]; 
    for (int i = 0; i < 4; i++) {
        cin >> array[i]; 
    }
    sort(array, array + 4); 
        long long AA = (array[2] + array[0]) / 2; 
        long long BB = array[2] - AA; 
        long long AA2 = (array[2] + array[1]) / 2; 
        long long BB2 = array[2] - AA2; 
        long long AA3 = (array[3] + array[0]) / 2; 
        long long BB3 = array[3] - AA3; 
        long long AA4 = (array[3] + array[1]) / 2; 
        long long BB4 = array[3] - AA4; 
        if ((AA % 1 == 0) && (AA != 0) && (BB % 1 == 0) && (BB != 0)) 
            if ((AA / BB == array[1]) && (AA * BB == array[3]) && (AA >= 1) && (BB >= 1) && (AA <= 10000) && (BB <= 10000)) 
            { 
                cout << AA << " " << BB << endl; 
                return; 
            } 
        if ((AA2 % 1 == 0) && (AA2 != 0) && (BB2 % 1 == 0) && (BB2 != 0)) 
            if ((AA2 / BB2 == array[0]) && (AA2 * BB2 == array[3]) && (AA2 >= 1) && (BB2 >= 1) && (AA2 <= 10000) && (BB2 <= 10000)) 
            { 
                cout << AA2 << " " << BB2 << endl;
                return; 
            } 
        if ((AA3 % 1 == 0) && (AA3 != 0) && (BB3 % 1 == 0) && (BB3 != 0)) 
            if ((AA3 / BB3 == array[1]) && (AA3 * BB3 == array[2]) && (AA3 >= 1) && (BB3 >= 1) && (AA3 <= 10000) && (BB3 <= 10000)) 
            { 
                cout << AA3 << " " << BB3 << endl;
                return; 
            } 
        if ((AA4 % 1 == 0) && (AA4 != 0) && (BB4 % 1 == 0) && (BB4 != 0)) 
            if ((AA4 / BB4 == array[0]) && (AA4 * BB4 == array[2]) && (AA4 >= 1) && (BB4 >= 1) && (AA4 <= 10000) && (BB4 <= 10000)) 
            { 
                cout << AA4 << " " << BB4 << endl;
                return; 
            } 
        cout << "-1 -1" << endl; 
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
