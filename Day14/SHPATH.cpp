#include <bits/stdc++.h>
using namespace std;
int main() {
	
    int t,citynum,number_of_neighbours,number_of_paths;
    
    char cityname[10];
    cin>>t;
    while(t--)
    {
        cin>>citynum;
        while(citynum--)
        {
            cin>>cityname;
            cin>>number_of_neighbours;

            int nr[number_of_neighbours],cost[number_of_neighbours];

            for(int i=0;i<number_of_neighbours;i++)
            {
                
                cin>>nr[i]>>cost[i];
            }
        }
        cin>>number_of_paths;
        if(number_of_paths<=100)
        {
            while(number_of_paths--)
            {
                cin>>s
            }
        }
    }
	return 0;
}