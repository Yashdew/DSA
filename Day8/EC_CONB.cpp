#include <bits/stdc++.h> 
using namespace std;

void decToBinary(int n) 
{ 
    // array to store binary number 
    int binaryNum[32]; 
  
    // counter for binary array 
    int i = 0; 
    while (n > 0) { 
  
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
  
    // printing binary array in reverse order 
    //for (int j = i - 1; j >= 0; j--) 
    cout << binaryNum[i-1]; 
} 

int main() {
	
    int t;
    
    
    cin>>t;
    int num[t];
    for(int i=0;i<t;i++)
    {
        cin>>num[i];
    }


    
    for(int i=0;i<t;i++)
    {
        if(num[i]%2==0)
        {
            if(i%2==0)
            {
               decToBinary(num[i]); 
               cout<<endl;
            }
            else if(i%2!=0)
            {
                decToBinary(num[i]); 
                cout<<endl;
            }
            
        }
        else if(num[i]%2!=0)
        {
            cout<<num[i]<<endl;
        }
    }
    return 0;
}