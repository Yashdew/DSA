#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int num;
        cin>>num;

        vector<string> str;
        
        for(int i=0;i<num;i++)
        {
            string temp;
            cin>>temp;
            str.push_back(temp);
        }
        
        set<char> firststr;
        for(int i=0;i<str.size();i++)
        {
            firststr.insert(str[i][0]);
        }

        int count=0;

        if( firststr.size()!=0)
        {
            set<string> finalstr;
            for(set<char>::iterator i=firststr.begin();i!=firststr.end();i++)
            {
                for(int j=0;j<str.size();j++)
                {
                    string temp=str[j];
                    temp[0]=*i;
                    finalstr.insert(temp);
                }
            }
            
            for (int i = 0; i < str.size(); i++) 
            {
                for (set<string>::iterator itr = finalstr.begin(); itr != finalstr.end(); itr++) 
                {
                    if(*itr==str[i])
                    {
                        finalstr.erase(itr); 
                    }
                }   
            
            }

            
            for (set<string>::iterator itr = finalstr.begin(); itr != finalstr.end(); itr++) 
            {
                for (set<string>::iterator itx = finalstr.begin(); itx!= finalstr.end(); itx++)
                {
                    if( *itr!= *itx)
                    {
                        string tempr=*itr;
                        string tempx=*itx;
                        if(tempr[0]!=tempx[0])
                        {
                            swap(tempr[0], tempx[0]);
                            if(  tempr == *find(str.begin(), str.end(), tempr) && tempx == *find(str.begin(), str.end(), tempx) )
                            {
                                count=count+1;
                            }
                        }
                    }
                }   
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
