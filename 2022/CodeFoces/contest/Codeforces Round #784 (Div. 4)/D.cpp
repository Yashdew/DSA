#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    string str;
    cin >> num >> str;

    bool flag = true;

    for (long long i = 0; i < num; i++)
    {
        if (str[i] == 'W')
            continue;
        else
        {
            long long j = i, cur = 0, cub = 0;
            while (j < num && str[j] != 'W')
            {
                if (str[j] == 'R')
                    cur++;
                else if (str[j] == 'B')
                    cub++;

                j++;
            }

            if (cur == 0 || cub == 0)
            {
                flag = false;
            }

            i = j - 1;
        }
    }

    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
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
