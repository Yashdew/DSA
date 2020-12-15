#include <iostream>
using namespace std;

int main() {
	int a,b,c;
    while(1)
    {
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
            return 0;
        else
        {
            if(b-a==c-b)
            {
                cout<<"AP"<<" "<<(a+(3)*(b-a))<<endl;
            }
            else if(b/a == c/b)
            {
                cout<<"GP"<<" "<<(c*(b/a))<<endl;
            }
        }
    }
	return 0;
}