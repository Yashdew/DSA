#include <bits/stdc++.h>
using namespace std;
void solve()
{
 long long  num; 
    cin >> num; 
    string str; 
    cin >> str; 
    int countA = 0, countB = 0, countC = 0, countD = 0, countE = 0, countF = 0; 
    for (int i = 0; i < str.length(); i++) 
    { 
        if (str[i] == '1' && (i % 2 == 0)) 
        { 
            countA++; 
            countE++; 
        } 
        else if (str[i] == '0' && (i % 2 == 1)) 
        { 
            countB++; 
            countF++; 
        } 
        if (str[i] == '1' && (i % 2 == 1)) 
        { 
            countC++; 
            countE++; 
        } 
        else if (str[i] == '0' && (i % 2 == 0)) 
        { 
            countD++; 
            countF++; 
        } 
    } 
    int answer = 0; 
    int lens = str.length(); 
    if (lens & 1) 
        lens--; 
    bool exA = true, exB= true; 
    for (int i = 0; i <= lens - 2; i += 2) 
    { 
        if (str[i] == '0' && str[i + 1] == '1') 
        { 
        } 
        else 
            exA = false; 
 
        if (str[i] == '1' && str[i + 1] == '0') 
        { 
        } 
        else 
            exB= false; 
    } 
 
    if (exA) 
    { 
        cout << lens / 2 << endl; 
        return; 
    } 
    else if (exB) 
    { 
        if (str[lens] == '1') 
        { 
            cout << (lens / 2) << endl; 
            return; 
        } 
    } 
 
    if (countE == countF) 
        answer = countE - 1; 
    else if (countE < countF) 
        answer = countE; 
    else if (countE > countF) 
        answer = countF; 
    cout << answer << endl; 

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
