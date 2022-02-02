#include <bits/stdc++.h>
using namespace std;

int main()
{

    int number_of_testcases, ans;
    string password;

    cin >> number_of_testcases;
    while (number_of_testcases--)
    {
    bool lowerCase = false, upperCase = false, digit = false, specialChar = false;

        cin >> password;
        if (password.size() < 10)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 0; i < password.size(); i++)
        {
           
            if (!specialChar && (password[i] == '@' || password[i] == '#' || password[i] == '?' || password[i] == '%' || password[i] == '&'))
            {
                if (i != 0 && i != password.size() - 1)
                {
                    specialChar = true;
                }
            }
            else if (!upperCase && isupper(password[i]))
            {
                if (i != 0 && i != password.size() - 1)
                {
                    upperCase = true;
                }
            }
           else if (!lowerCase && islower(password[i]))
            {

                lowerCase = true;
            }
           else if (!digit && isdigit(password[i]))
            {
                if (i != 0 && i != password.size() - 1)
                {
                    digit = true;
                }
            }
        }
        if (lowerCase && upperCase && digit && specialChar)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}