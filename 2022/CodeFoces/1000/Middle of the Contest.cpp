#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long startHH,startMM,endHH,endMM;
    char c;
    cin>>startHH>>c>>startMM;
    cin>>endHH>>c>>endMM;

    long long start = startHH*60 + startMM;
    long long end = endHH*60 + endMM;
    
    long long temp = (start + end)/2;
    long long HH = temp/60;
    
    long long MM = temp%60;
    
    
    if(HH<10){
        cout<<0<<HH<<":";
    }
    else    
        cout<<HH<<":";

    if(MM<10){
        cout<<0<<MM<<endl;
    }
    else    
        cout<<MM<<endl;   
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
