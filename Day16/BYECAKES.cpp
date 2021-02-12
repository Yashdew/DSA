#include <iostream>
using namespace std;

int main() {
    while(1)
    {
        int E,F,S,M;
        int E1,F1,S1,M1;
        cin>>E>>F>>S>>M>>E1>>F1>>S1>>M1;
        if( E==-1 && E==-1 && E==-1 && E==-1 && E==-1 && E==-1 && E==-1 && E==-1 )
        {
            return 0;
        }
        
        else
        {
            int count=0;
            int Etemp=E,Ftemp=F,Stemp=S,Mtemp=M;
            
            while( E!=0 || F!=0 || S!=0 || M!=0 )
            {
                if(E!=0)
                {
                    E=abs(E-E1);
                }
                if(F!=0)
                {
                    F=abs(F-F1);
                }
                if(S!=0)
                {
                    S=abs(S-S1);
                }
                if(M!=0)
                {
                    M=abs(M-M1);
                }
                count++;
               
                
            }
            cout<<count<<endl;
            cout<<abs(Etemp-count*(E1))<<" "<<abs(Ftemp-count*(F1))<<" "<<abs(Stemp-count*(S1))<<" "<<abs(Mtemp-count*(M1))<<endl;
        }
    }
	return 0;
}