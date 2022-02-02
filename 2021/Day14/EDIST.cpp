#include <bits/stdc++.h>
#include <cctype>
using namespace std;
class temp
{
    public:
    int t;
    char strA[2000],strB[2000],temp[2000];
    int count=0;

    void EDIST()
    {
        cin>>t;
        while(t--)
        {
            // && isupper(temp)
            char strA[2000],strB[2000],temp[2000];

            cin>>temp;
            if(strlen(temp)<2000)
            {
                strcpy(strA,temp);
            }

            cin>>temp;
            if(strlen(temp)<2000 )
            {
                strcpy(strB,temp);
            }

            count=0;
            if(strlen(strA) == strlen(strB))
            {
                
                for(int i=0;i<strlen(strB);i++)
                {
                    if(strB[i]!=strA[i])
                    {
                        strB[i]=strA[i];
                        count++;
                    }
                }
                cout<<count;
                
            }
            else 
            {
                
                for(int i=0;i<strlen(strA);i++)
                {
                if(strA[i]!=strB[i])
                    {
                        strB[i]=strA[i];
                        count++;
                    }
                }
                cout<<count+1;
            }
        }
    }
};
int main() {
	temp t;
    t.EDIST();
	return 0;
}