#include <iostream>
using namespace std;

void location(int x, int y)
{
   if( (x+y)%2!=0 )
   {
       cout<<"No Number"<<endl;
   }
   else
   {
      if(x==y)
      {
          if(x%2!=0)
          {
              cout<<x+y-1<<endl;
          }
          else
          {
              cout<<x+y<<endl;
          }
          
      }
      else
      {
          if(x%2!=0 && y%2!=0)
          {
              cout<<x+y-1<<endl;
          }
          
          else if(x%2==0 && y%2==0)
          {
              cout<<x+y<<endl;
          }
      }
      

   }
   
}
int main() {
	
	int t;
    int x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x>=0 && x<=10000)
        {
            if(y>=0 && y<=10000)
            {
                location(x,y);
            }
        }
        
    }
	return 0;
}