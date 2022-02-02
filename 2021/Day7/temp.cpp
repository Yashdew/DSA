#include<iostream>
using namespace std;
int main()
{
    int array_variable[10];
    for(int i=0;i<10;++i)  {
        array_variable[i]=i/2;
        array_variable[i]++;
       cout<<array_variable[i];
        i++;
    }
}