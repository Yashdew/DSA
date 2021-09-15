#include <iostream>
using namespace std;


int main() {
	
	int t;
    int x,y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y;
        if(x!=y && x-y!=2)
        {
           cout<<"No Number"<<endl;
           continue;
        }
        
        if(x%2==0 && y%2==0)
            cout<<x+y<<endl;
        else
            cout<<x+y-1<<endl;

        
    }
	return 0;
}




// void location(int x, int y)
// {
//    if( (x+y)%2!=0 )
//    {
//        cout<<"No Number"<<endl;
//    }
//    else
//    {
//       if(x==y)
//       {
//           if(x%2!=0)
//           {
//               cout<<x+y-1<<endl;
//           }
//           else
//           {
//               cout<<x+y<<endl;
//           }
          
//       }
//       else
//       {
//           if(x%2!=0 && y%2!=0)
//           {
//               cout<<x+y-1<<endl;
//           }
          
//           else if(x%2==0 && y%2==0)
//           {
//               cout<<x+y<<endl;
//           }
//       }
      

//    }
   
// }
// int main() {
	
// 	int t;
//     int x,y;
//     cin>>t;
//     while(t--)
//     {
//         cin>>x>>y;
//         if(x==y || x-2==y || x==y-2 || x>=y)
//         {
//             location(x,y);
//         }
//         else
//         {
//             cout<<"No Number"<<endl;
//         }
//     }
// 	return 0;
// }