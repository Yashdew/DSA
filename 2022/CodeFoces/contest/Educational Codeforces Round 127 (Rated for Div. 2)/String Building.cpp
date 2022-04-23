#include <bits/stdc++.h>
using namespace std;
void solve()
{
    string str;
    cin>>str;

    map<string,int> hashmap;

    string temp;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]!=str[i+1]){
            temp = temp+str[i];
            if(temp.size()%2==0){
                hashmap[temp[0]+temp[1]] = temp.size()/2;
            }
            else if(temp.size()%3==0){
                hashmap[temp[0]+temp[1]+temp[2]]=temp.size()/3;
            }
            else if(temp.size()==1){
                cout<<"NO"<<endl;
                return;
            }
            temp="";
        }
        else{
            temp = temp+str[i];
        }
    }

    if(str[str.size()-1] == temp[temp.size()-1]){
        temp = temp + str[str.size()-1];
        if(temp.size()%2==0){
            hashmap[temp[0]+temp[1]] = temp.size()/2;
        }
        else if(temp.size()%3==0){
            hashmap[temp[0]+temp[1]+temp[2]]=temp.size()/3;
        }
    }
    else{
        cout<<"NO"<<endl;
    }

    for(auto it:hashmap){
        if( it.first.length()%2==0 || it.first.length()%3==0)
            continue;
        else{
            cout<<"NO"<<endl;
            return;
        }
    }

    cout<<"YES"<<endl;
    return;
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
