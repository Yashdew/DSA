#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int num;
    cin>>num;

    

    while(num--){
        int temp;
        cin>>temp;
        if(temp==2)
            cout<<"-1"<<endl;
        else if(temp==4){
            cout<<"1 4 2 3"<<endl;
        }
        else{
            if(temp%2!=0){
                for(int i=0; i<temp;i++){
                    cout<<i+1<<" ";
                }
                cout<<endl;
            }
            else{
                int i=0;
                for(i=0;i<temp-4;i++){
                    cout<<i+1<<" ";
                }
                cout<<i+3<<" "<<i+4<<" "<<i+2<<" "<<i+1<<endl;
            }
            
        }
    }
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
            solve();
    
    return 0;
}
