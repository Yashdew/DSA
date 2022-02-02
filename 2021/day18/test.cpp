#include<bits/stdc++.h>
using namespace std;
int decimalBase(int num){
    int temp, base=1, decimalnum=0;
    while(num>0){
        temp = num%10;
        decimalnum += temp*base;
        num/=10;
        base*=2;
    }
    return decimalnum;
}
int main() {
	int t;
	cin>>t;
	string mainstring[16] = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p"};
	while(t--){
	    int N;
	    cin>>N;
	    string STRING, tempstr;
	    int temp;
	    cin>>STRING;
	    for(int i=0;i<N;i+=4)
		{
	        tempstr = STRING.substr(i,4);
	        temp = stoi(tempstr);
	        int pos  = decimalBase(temp);
	        cout<<mainstring[pos];
	    }
	    cout<<endl;
	}
	return 0;
}