#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long num;
    cin>>num;

    vector<long long> array(num,0);

       
      for(int i=0;i<num;++i)cin>>array[i];
      long long left=array[0],right=array[num-1];;
      long long i=0,j=n-1;
      long long answer=0;
      long long x1=0,y1=0;
      long long flag=0;
      while(i<j)
       {
          //   cout<<leftsum<<" "<<rightsum<<" ";
           if(left==right)
            {
                 x1=i;y1=j;
                 i++;j--;flag=1;
                 left+=array[i];right+=array[j];
            }
            else
            { if(left>right)
              {
                   j--;
                   right+=array[j];
              }
              else
               {
                    i++;
                    left+=array[i];
               }
                 
            }
       }
          if(flag==0)
           cout<<"0";
           else
            cout<<x1+1+n-y1;
}
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
            solve();
    }

    return 0;
}
