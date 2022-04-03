#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
        cin >> n;

        int *arr = new int[n];
        unordered_map<int, int> obj;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            obj[arr[i]]++;
        }

        int pairs = 0;
        int number_of_sticks_to_add = 0;

        for (auto i = obj.begin(); i != obj.end(); i++)
        {
            pairs = pairs + (i->second + 1) / 2;
            if (i->second % 2 != 0)
            {
                number_of_sticks_to_add++;
            }
        }

        if (pairs % 2 != 0)
        {
            number_of_sticks_to_add = number_of_sticks_to_add + 2;
        }

        cout << number_of_sticks_to_add << endl;
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
