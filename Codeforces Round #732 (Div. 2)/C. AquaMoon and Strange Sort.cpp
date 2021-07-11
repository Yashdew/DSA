#include <bits/stdc++.h>
using namespace std;

bool ischeck(vector<char> dir)
{
    for(int i=0;i<dir.size();i++)
    {
        if(dir[i]!='R')
            return false;
    }
    return true;
}

void sorting(vector<int> &array,vector<char> &dir)
{
    for(int i=0;i<array.size()-1;i++)
    {
        for(int j=i+1;j<array.size();j++)
        {
            if(array[i] > array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;

                if(dir[i]=='R')
                {
                    dir[i]='L';
                }
                else
                {
                    dir[i]='R';
                }

                if(dir[j]=='R')
                {
                    dir[j]='L';
                }
                else
                {
                    dir[j]='R';
                }
            }
        }
    }
}

void sorting1(vector<int> &array,vector<char> &dir)
{
    for(int i=0;i<array.size()-1;i++)
    {
        for(int j=i+1;j<array.size();j++)
        {
            if(array[i]==array[j] && i!=j && dir[i]!='R' && dir[j]!='R') 
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
                
                if(dir[i]=='L')
                {
                    dir[i]='R';
                }

                if(dir[j]=='L')
                {
                    dir[j]='R';
                }
            }
        }
    }
}
int solve()
{
    int num;
    cin>>num;

    vector<int> array;
    vector<char> dir(num,'R');

    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }

    sorting(array,dir);

    if(ischeck(dir))
        cout<<"YES"<<endl;
    else
    {
        sorting1(array,dir);
        if(ischeck(dir))
            cout<<"YES"<<endl;
        else   
            cout<<"NO"<<endl;
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
