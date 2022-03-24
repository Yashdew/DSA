#include <bits/stdc++.h>
using namespace std;
bool findk(vector<long long> array, long long size, long long n)
{
    unordered_map<int, int> hashmap;
    for (int i = 0; i < size; i++) {
        hashmap[array[i]]++;
    }
    for (int i = 0; i < size; i++) {
        if (hashmap.find(n + array[i]) != hashmap.end()) {
            return true;
        }
    }
    return false;
}
void solve()
{
    long long num,k;
    cin>>num>>k;

    vector<long long> array;

    for(long long i=0;i<num;i++){
        long long temp;
        cin>>temp;
        array.push_back(temp);
    }

    if(findk(array,num,k))
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

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


// #include<bits/stdc++.h>
// using namespace std;



// void gandu_benchod(){
//             int n;

//           cin>>n;
//           long long m[n];bool ok=0, ben_ka_lode=0;
//           for(int i=0;i<n;i++){
//             cin>>m[i];
//             if(m[i]==0){
//               ok=1;
//             }
//             if(m[i]==1){
//               ben_ka_lode=1;
//             }
//           }



//           if(ok && ben_ka_lode){
//             cout<<"NO\n"; 

//           }else if(!ben_ka_lode){
//             cout<<"YES\n";

//           }else{
//             bool gand_magoli_maro=0;

//             sort(m, m+n);
//             for(int i=0;i<n-1;i++){

//               if(m[i]+1==m[i+1]){

//                 gand_magoli_maro=1;
//               }
//             }
//             if(gand_magoli_maro){

//               cout<<"NO\n";
//             }else{







//               cout<<"YES\n";

//             }



//    }
// }
         
// int main() {

//     int T  ;
//     cin >> T ;
//     for ( int i = 1 ; i <= T ; i++){

//      gandu_benchod();
    
//     }


//     return 0 ;
// }