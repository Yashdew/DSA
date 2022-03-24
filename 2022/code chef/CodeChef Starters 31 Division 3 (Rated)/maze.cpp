#include <bits/stdc++.h>
using namespace std;
int solve()
{
     long long n; 
     cin>>n; 
     vector<long long> b(n); 
     for(int i=0;i<n;i++) 
       cin>>b[i]; 
     long long maxi=0; 
     bool can=true; 
     for(int i=0;i<n;i++) 
     { 
         if(b[i]!=-1) 
         { 
             if(maxi>b[i] or b[i]>i+1) 
              { 
                  can=false; 
                  break; 
              } 
             maxi=max(b[i],maxi); 
         }   
     } 
     map<long long,bool> used; 
     if(can) 
     { 
        vector<long long> ans(n,-1); 
       if(b[n-1]!=-1) 
        used[b[n-1]]=1; 
        for(int i=n-1;i>=0;i--) 
         if(b[i-1]!=-1) 
         { 
             if(!used[b[i-1]]) 
             { 
                 used[b[i-1]]=1; 
                 ans[i]=b[i-1]; 
             } 
         } 
         long long  start=0; 
        for(int i=0;i<n;i++)
          if(ans[i]==-1) 
          { 
              while(used[start]) 
               start++; 
             ans[i]=start++; 
          } 
          for(int i=0;i<n;i++)
           cout<<ans[i]<<" "; 
           cout<<endl; 
     } 
     else 
      cout<<-1<<endl; 
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

#include<bits/stdc++.h> 
using namespace std; 
#define f(i,a,b) for(long long i=a;i<b;i++) 
#define rf(i,a,b) for(long long i=a;i>=b;i--) 
#define ll long long 
#define mp make_pair 
#define pb push_back 
#define vll vector<long long> 
#define vvl vector<vll> 
#define pll pair<ll,ll> 
#define vc vector 
#define fi first 
#define se second 
#define IOS ios_base::sync_with_stdio(0) 
#define tie cin.tie(NULL),cout.tie(NULL)  
 
int main() 
{   
   IOS;tie; 
   int T; 
   cin>>T; 
   while(T--) 
   { 
     ll n; 
     cin>>n; 
     vll b(n); 
     f(i,0,n) 
       cin>>b[i]; 
     ll maxi=0; 
     bool can=true; 
     f(i,0,n) 
     { 
         if(b[i]!=-1) 
         { 
             if(maxi>b[i] or b[i]>i+1) 
              { 
                  can=false; 
                  break; 
              } 
             maxi=max(b[i],maxi); 
         }   
     } 
     map<ll,bool> used; 
     if(can) 
     { 
       vll ans(n,-1); 
       if(b[n-1]!=-1) 
        used[b[n-1]]=1; 
        rf(i,n-1,1) 
         if(b[i-1]!=-1) 
         { 
             if(!used[b[i-1]]) 
             { 
                 used[b[i-1]]=1; 
                 ans[i]=b[i-1]; 
             } 
         } 
         ll start=0; 
         f(i,0,n) 
          if(ans[i]==-1) 
          { 
              while(used[start]) 
               start++; 
             ans[i]=start++; 
          } 
          f(i,0,n) 
           cout<<ans[i]<<" "; 
           cout<<endl; 
     } 
     else 
      cout<<-1<<endl; 
   } 
    return 0; 
}