#include <bits/stdc++.h>
using namespace std;

int checkLeap(int year)
{
    if( ( (year%4==0) && (year%100!=0) ) || (year%400)==0  )
        return 1;
    
    return -1;

}
int  dayFromWeek(int date,int month,int year)
{
    vector<int> monthcode={0,3,3,6,1,4,6,2,5,0,3,5};
    if(checkLeap(year)==0)
    {
        monthcode[0]=6;
        monthcode[1]=2;
    }

    int yearcode=0;
    if( year >= 1900  && year<=1999)
        yearcode=0;
    else if(year >= 2000  && year<=2099)
        yearcode=6;
    else if(year >= 2100  && year<=2199)
        yearcode=4;
    else if(year >= 2200  && year<=2299)
        yearcode=2;
    else if(year >= 2300  && year<=2399)
        yearcode=0;
    else if(year >= 2400  && year<=2499)
        yearcode=6;

    int lastdigit=0;
    int temp=2;
    int sum=0;
    while(temp--)
    {
        lastdigit = lastdigit*10 + (year%10);
        year = year/10;
    }
    int revlastDigit=0;
    while(lastdigit!=0)
    {
        revlastDigit = revlastDigit*10 +(lastdigit%10);
        lastdigit=lastdigit/10;
    }
    lastdigit = revlastDigit;
    // cout<<lastdigit<<endl;
    // cout<<lastdigit/4<<endl;
    // cout<<yearcode<<endl;
    // cout<<monthcode[month-1]<<endl;
    // cout<<date<<endl;
    
    sum = lastdigit + lastdigit/4 + yearcode + monthcode[month-1] + date;
    sum = sum%7;

    
    
    return sum; 
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int year;
    cin>>year;

    vector<int> month_day = {31,28,31,30,31,30,31,31,30,31,30,31};
    vector<string> monthName = { "JAN","FEB","MAR","APR","MAY","JUNE","JUL","AUG","SEPT","OCT","Nov","Dec" };
    vector<int> monthNum = { 1,2,3,4,5,6,7,8,9,10,11,12 };
    
    //vector<string> dayName = { "S","M","T","W","T","F","S" };
    

    if( checkLeap(year) == 1)
        month_day[1]=29;

    //cout<<"YEAR :"<<year<<endl;
    for(int i=0;i<monthName.size();i++)
    {
        cout<<monthName[i]<<endl;
        //cout<<" S "<<" M "<<" T "<<" W "<<" T "<<" F "<<" S "<<endl;
        for(int j=0;j<month_day[i];j++)
        {
            cout<<j+1<<"/"<<monthNum[i]<<"/"<<year<<"  ";
            int index=dayFromWeek(j+1, monthNum[i],year);
            vector<string> weekName = {"sun","Mon","Tue","wed","thru","friday","sat"};
            cout<<weekName[index]<<endl;
        }
    }
    return 0;
}
