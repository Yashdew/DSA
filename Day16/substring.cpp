#include<bits/stdc++.h>
using namespace std;

int count_substrings (int N, string S) {
   // Write your code here
   string str="pdgt";
   int count=0;
   for(int i=0;i<N;i++)
   {
      for(int j=0;j<N-i;j++)
      {
         int k=j+i-1;
         for(int m=j;m<=k;m++)
         {
            if( S.find( str[m])==0 )
            {
               count++;
            }
         }
      }
   }
   return count;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    string S;
    cin >> S;

    int out_;
    out_ = count_substrings(N, S);
    cout << out_;
}