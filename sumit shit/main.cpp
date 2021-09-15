#include <bits/stdc++.h>
using namespace std;
void function1(string str,int num)
{
    int lengthofstring = str.length();
    int count=0;
    for (int i = 0; str[i] != '\0';i++)
    {
        if (str[i] == ' ')
            count++;    
    }
    int numofwords = count+1;

    int chunks = ceil(lengthofstring/numofwords) + 1;
    vector<string> chunksofwords;
    string temp;
    int j=0;
    int i=0;
    while(i < lengthofstring)
    //for (int i = 0; ;i=i+j)
    {
        if (str[i] != ' ')
        {
            j=i;
            while(str[j]!=' ' || ( temp.length()<=numofwords && temp.length()<= chunks  ) )
            {
                if(temp.length() <=chunks+1 || str[j+1]!=' ' || temp.length()<=numofwords)
                {
                    temp = temp + str[j];
                    j++;
                }
                if(str[j]=='\0')
                {
                    break;
                }
                
            }
            chunksofwords.push_back(temp);
            temp.clear();
            i=j;
        } 
        else
        {
            i++;
            //continue;
        }
             
    }

    for(int i=0;i<chunksofwords.size();i++)
    {
        cout<<chunksofwords[i]<<endl;
    }
}   
int main()
{  
    string str="IT is an amazing experience to give tests on DoSelect!!";
    int num=17;
    function1(str,num);

    return 0;
}
