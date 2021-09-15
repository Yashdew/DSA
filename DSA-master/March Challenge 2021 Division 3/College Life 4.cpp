#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int numOfPerson;
        cin>>numOfPerson;
        
        long long int egg,milkshake;
        cin>>egg>>milkshake;
        
        long long int Rateomelette,Ratemilkshake,Ratecake;
        cin>>Rateomelette>>Ratemilkshake>>Ratecake;

        vector<vector<long long int>> numofdishes;
        vector<long long int> temp;

        long long int No_of_omelette=0,No_of_milkshake=0,No_of_cake=0;
        while(egg>0 && milkshake>0)
        {
            if( Rateomelette <= Ratemilkshake && Rateomelette <= Ratecake &&  Ratemilkshake <= Ratecake)
            {   //a<b<c
                if (egg>=2)
                {
                    No_of_omelette =No_of_omelette +  (egg/2);
                    egg=egg-2;
                }
                else if(milkshake>=3)
                {
                    No_of_milkshake = No_of_milkshake + (milkshake/3) ;
                    milkshake = milkshake - 3;
                }
                else if(egg>0 && milkshake>0)
                {
                    No_of_cake = No_of_cake + 1;
                    egg=egg-1;
                    milkshake=milkshake-1;
                }
                
                if( No_of_omelette+No_of_milkshake+No_of_cake == numOfPerson)
                {
                    temp.push_back(No_of_omelette);
                    temp.push_back(No_of_milkshake);
                    temp.push_back(No_of_cake);
                    numofdishes.push_back(temp);
                    temp.clear();
                }
            }
            else if( Ratemilkshake < Rateomelette && Ratemilkshake < Ratecake && Rateomelette < Ratecake)
            {
                //b<a<c
                if(milkshake>=3)
                {
                    No_of_milkshake = No_of_milkshake + 1;
                    milkshake = milkshake - 3;
                }
                else if (egg>=2)
                {
                    No_of_omelette = No_of_omelette + 1;
                    egg=egg-2;
                }
                else if(egg>0 && milkshake>0)
                {
                    No_of_cake = No_of_cake + 1;
                    egg=egg-1;
                    milkshake=milkshake-1;
                }
                if( No_of_omelette+No_of_milkshake+No_of_cake == numOfPerson)
                {
                    temp.push_back(No_of_omelette);
                    temp.push_back(No_of_milkshake);
                    temp.push_back(No_of_cake);
                    numofdishes.push_back(temp);
                    temp.clear();
                }
            }

            else if(Rateomelette < Ratecake && Rateomelette < Ratemilkshake &&  Ratecake  < Ratemilkshake)
            {
                //a<c<b
                if (egg>=2)
                {
                    No_of_omelette = No_of_omelette + 1;
                    egg=egg-2;
                }
                else if(egg>0 && milkshake>0)
                {
                    No_of_cake = No_of_cake + 1;
                    egg=egg-1;
                    milkshake=milkshake-1;
                }
                else if(milkshake>=3)
                {
                    No_of_milkshake = No_of_milkshake +1;
                    milkshake = milkshake - 3;
                }

                if( No_of_omelette+No_of_milkshake+No_of_cake == numOfPerson)
                {
                    temp.push_back(No_of_omelette);
                    temp.push_back(No_of_milkshake);
                    temp.push_back(No_of_cake);
                    numofdishes.push_back(temp);
                    temp.clear();
                }
            }
            else if( Ratemilkshake < Ratecake  && Ratemilkshake < Rateomelette && Ratecake < Rateomelette)
            {
                //b<c<a
                if(milkshake>=3)
                {
                    No_of_milkshake = No_of_milkshake + 1;
                    milkshake = milkshake - 3;
                }
                else if(egg>0 && milkshake>0)
                {
                    No_of_cake = No_of_cake + 1;
                    egg=egg-1;
                    milkshake=milkshake-1;
                }
                else if (egg>=2)
                {
                    No_of_omelette = No_of_omelette + 1;
                    egg=egg-2;
                }
                if( No_of_omelette+No_of_milkshake+No_of_cake == numOfPerson)
                {
                    temp.push_back(No_of_omelette);
                    temp.push_back(No_of_milkshake);
                    temp.push_back(No_of_cake);
                    numofdishes.push_back(temp);
                    temp.clear();
                }
            }
            else if( Ratecake < Rateomelette  && Ratecake < Ratemilkshake && Rateomelette  < Ratemilkshake )
            {
                //c<a<b
                if(egg>0 && milkshake>0)
                {
                    No_of_cake = No_of_cake + 1;
                    egg=egg-1;
                    milkshake=milkshake-1;
                }
                else if (egg>=2)
                {
                    No_of_omelette = No_of_omelette + 1;
                    egg=egg-2;
                }
                else if(milkshake>=3)
                {
                    No_of_milkshake = No_of_milkshake + 1;
                    milkshake = milkshake - 3;
                }
                if( No_of_omelette+No_of_milkshake+No_of_cake == numOfPerson)
                {
                    temp.push_back(No_of_omelette);
                    temp.push_back(No_of_milkshake);
                    temp.push_back(No_of_cake);
                    numofdishes.push_back(temp);
                    temp.clear();
                }
            }
            else if(Ratecake < Ratemilkshake   && Ratecake < Rateomelette && Ratemilkshake  < Rateomelette )
            {
                //c<b<a
                if(egg>0 && milkshake>0)
                {
                    No_of_cake = No_of_cake + 1;
                    egg=egg-1;
                    milkshake=milkshake-1;
                }
                else if(milkshake>=3)
                {
                    No_of_milkshake = No_of_milkshake + 1;
                    milkshake = milkshake - 3;
                }
                else if (egg>=2)
                {
                    No_of_omelette = No_of_omelette + 1;
                    egg=egg-2;
                }
                if( No_of_omelette+No_of_milkshake+No_of_cake == numOfPerson)
                {
                    temp.push_back(No_of_omelette);
                    temp.push_back(No_of_milkshake);
                    temp.push_back(No_of_cake);
                    numofdishes.push_back(temp);
                    temp.clear();
                }
            }
        }

        vector<long long int> sum; 
        for(long long int i=0;i<numofdishes.size();i++)
        {
           sum.push_back( (numofdishes[i][0] * Rateomelette) + (numofdishes[i][1] * Ratemilkshake ) + (numofdishes[i][2] * Ratecake ) );
        }

        if(sum.size()>0)
        {
            cout<<*min_element(sum.begin(),sum.end())<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
        sum.clear();
    }

    return 0;
}
