#include <iostream>
using namespace std;
bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
void printPrime(int first,int last) 
{ 
    for (int i = first; i <= last; i++) { 
        if (isPrime(i)) 
            cout << i <<endl; 
    } 
} 
int main() 
{
	
    int t;
    int first,last;
    //bool isPrime=true;
    cin>>t;
    if(t>0 && t<=10)
    {
        while(t--)
        {
            cin>>first>>last;
            if(first>=1 && last>=1 && first<=1000000000 && last<=1000000000 && last-first<=100000)
            {
                printPrime(first,last); 
            }
           
        }
    }
    
	return 0;
}