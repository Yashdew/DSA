
#include <bits/stdc++.h>
using namespace std;

int calculate(string time)
{
    auto hhstring = string(1,time[0]) + time[1];
    auto mmstring = string(1,time[3]) + time[4];
    int hh = stoi(hhstring);
    int mm = stoi(mmstring);
    if(time[6]=='A')
    {
        auto hhstring = string(1,time[0]) + time[1];
        auto mmstring = string(1,time[3]) + time[4];
        int hh = stoi(hhstring);
        int mm = stoi(mmstring);
        if(hh!=12)
        {
            int sum=0;
            sum = sum + (hh*60)+mm;
            return sum;
        }
        else
        {
            int sum=0;
            sum = sum + mm;
            return sum;
        }
    }
    else if(time[6]=='P')
    {
        
        if(hh!=12)
        {
            int sum=720;
            sum = sum + (hh*60)+mm;
            return sum;
        }
        else
        {
            int sum=720;
            sum = sum + mm;
            return sum;
        }
    }
}
int main()
{  
    int t=0;
    cin >> t;
    while (t--)
    {
    //    cout<<t;
       string realtime;
       cin.ignore();
       getline(cin, realtime); 
       int realtimevalue; 
       realtimevalue = calculate(realtime);
    //    cout<<realtimevalue<<endl;
       int num;
       cin>>num;
       
       while(num--)
       {
            string starttime;
            string endtime;

            getline(cin, starttime);
            int starttimevalue; 
            starttimevalue = calculate(starttime);
            
            getline(cin, endtime);
            int endtimevalue; 
            endtimevalue = calculate(endtime);
            // cout<<starttimevalue<<endl;
            // cout<<realtimevalue<<endl;
            // cout<<endtimevalue<<endl;
            if(  starttimevalue <= realtimevalue && realtimevalue <= endtimevalue)
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }

       }
    }

    return 0;
}