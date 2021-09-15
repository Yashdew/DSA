#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        char str[101];
        cin>>str;

        if(strlen(str)<=10)
            cout<<str<<endl;
        else{
            cout<<str[0]<<strlen(str)-2<<str[strlen(str)-1]<<endl;
        }
    }
    
    return 0;
}