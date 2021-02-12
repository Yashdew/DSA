#include <bits/stdc++.h>
using namespace std;
int main()
{  
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        int num;
        cin>>num;
        
        int count=0;

        if(num==2)
        {
            int wx,wy;
            cin>>wx>>wy;
            int lx,ly;
            cin>>lx>>ly;

            if(wx>wy)
            {
                int temp=wx;
                wx=wy;
                wy=temp;

                if(lx==1)
                {
                    count++;
                }
                
                temp=lx;
                lx=ly;
                ly=lx;

                count++;
            }
        }
        else if(num==3)
        {
            vector<int> length;
            int weight[1000];
            for(int i=0;i<num;i++)
            {
                cin>>weight[i];
                
            }
            for(int i=0;i<num;i++)
            {
                int temp;
                cin>>temp;
                length.push_back(temp);
            }

            for(int i=0;i<50;i++)
            {
                for(int j=1;j<50;j++)
                {
                    if(weight[j])
                    {

                    }
                }
            }
        }
        cout<<count<<endl;
    }

    return 0;
}

//  int secondMinimum=2;
//             int weight[1000];
            
//             //vector<int> weight;
//             vector<int> length;

//             for(int i=0;i<num;i++)
//             {
//                 cin>>weight[i];
//                 // int temp;
//                 // cin>>temp;
//                 // weight.push_back(temp);
//             }
//             for(int i=0;i<num;i++)
//             {
//                 int temp;
//                 cin>>temp;
//                 length.push_back(temp);
//             }

//             if(weight[2]==2)
//             {
//                 if(weight[1]==3)
//                 {
//                     if(length[length.size()-2]==1)
//                     {
//                         count=count+2;
//                     }
//                     else
//                     {
//                         count=count+1;
//                     }
//                 }
//                 else if(weight[1]==1)
//                 {
//                     if(weight[0]==3)
//                     {
//                         if(length[0]==1)
//                         {
//                             count=count+3;
//                         }
//                         else if(length[0]==2)
//                         {
//                             count=count+2;
//                         }
//                         else
//                         {
//                             count=count+1;
//                         }

//                     }
//                 }
//             }
//             else if(weight[2]==1)
//             {
//                 if(weight[1]==2)
//                 {
//                     if(length[1]==1)
//                     {
//                         weight[3] = weight[1];
//                         weight[1] = 0; 
//                         count=count+2;
//                     }
//                     else
//                     {
//                         count=count+1;
//                     }

//                     if(weight[0]==3)
//                     {
//                         if(length[0]==1)
//                         {
//                             weight[3] = weight[1];
//                             weight[1] = 0; 
//                             count=count+4;
//                         }
//                         else if(length[0]==2)
//                         {
//                             count=count+2;
//                         }
//                         else if(length[0]==3)
//                         {
//                             count=count+2;
//                         }
//                         else
//                         {
//                             count=count+1;
//                         }
//                     }
//                 }
//             }       
