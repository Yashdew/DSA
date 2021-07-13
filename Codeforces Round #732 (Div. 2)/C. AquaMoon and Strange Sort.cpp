#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int num;
    cin>>num;
    vector<int> array;
    vector<int> even,odd;

    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;

        array.push_back(temp);

        if(i%2==0)
            even.push_back(temp);
        else
            odd.push_back(temp);
    }

    sort(array.begin(),array.end());
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());

    int e=0,o=0;
    int flag=1;
    for(int i=0;i<num;i++)
    {
        int ele;
        if(i%2==0)
        {
            ele = even[e];
            e++;
        }
        else
        {
            ele = odd[o];
            o++;
        }
            
        
        if(array[i]!=ele)
        {
            flag=0;
            break;
        }
    }

    if(flag==0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
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
