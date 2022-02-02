#include <bits/stdc++.h>
using namespace std;
bool checkbinary(string num)
{
    for(int i = 0; i < num.length(); i++)
    {
        if(num[i] != '0' && num[i] != '1')
        {
            return false;
        }
    }
    return true;
}

int Subtract(int a, int b)
{
    int c;
    c = a + (~b + 1);
    return c;
}

long long int countDigit(long long int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n / 10;
        ++count;
    }
    return count;
}

void solve()
{
    string n;
    cin >> n;
    stringstream geek(n);
    long long int num = 0;
    geek >> num;

    if(!checkbinary(n))
    {
        int sizedecimal = countDigit(num);;
        int maximum = 0;
        for(int i=0;i<sizedecimal;i++)
        {
            maximum = maximum*10 + 1;
        }
        int count = 0;
        while(num>0)
        {
            if(maximum <= num)
            {
                num = num - maximum;
                sizedecimal = countDigit(num);
                maximum = 0;
                for(int i=0;i<sizedecimal;i++)
                {
                    maximum = maximum*10 + 1;
                }  
                count++;            
            }
            else
            {
                maximum = Subtract(maximum,1);
            }
        }
        cout<<count<<endl;
    }
    else
    {
        cout <<1<<endl;
    }
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
