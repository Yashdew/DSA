#include <bits/stdc++.h>
using namespace std;
void solve()
{
        long long num, cnt, a, b;
        cin >> num >> cnt >> a >> b;
        long long sum = 0;
        vector<long long> array(num+1);
        array[0] = 0;
        for (int i = 1; i <= num; i++)
        {
            if (array[i - 1] + a <= cnt)
            {
                array[i] = array[i - 1] + a;
            }
            else
            {
                array[i] = array[i - 1] - b;
            }
        }
        for (int i = 0; i <= num; i++)
        {
            sum += array[i];
        }
        cout << sum << '\n';
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
