#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
    cin>>t;
    while(t--)
    {
        int N,K,T,F;
        cin>>N>>K>>T>>F;
        if(N>1 && N<1000000 && K>1 && K<1000000 && T>1 && T<1000000 && F>1 && F<1000000 )
        {
            cout<<(N+(F-N)*K/(K-1))<<endl;
        }
    }
	return 0;
}