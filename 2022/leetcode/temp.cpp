#include <bits/stdc++.h>
using namespace std;
int countCollisions(string directions) {
        int i=0,j;
        int count=0;
        stack<char> st;
        while(i<directions.length()){
            if( st.empty() )
                st.push(directions[i]);
            else{
                if(st.top()=='R' && directions[i]=='L')
                {
                    count+=2;
                    st.pop();
                    st.push('S'); 
                    i++;
                }
                else{
                    if(st.top()=='R' && directions[i]=='S')
                    {
                        count++;
                        st.pop();
                        st.push('S');
                        i++;
                    }
                    else if(st.top()=='S' && directions[i]=='L')
                    {
                        count++;
                        st.pop();
                        st.push('S');
                        i++;
                    }
                    else{
                        st.push(directions[i]);
                        i++;
                    }
                        
                }
            }
        }
        
        return count;
    }
int main()
{  
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    
    vector<int> nums={6,6,5,5,4,1};
    string directions="LLRLRLLSLRLLSLSSSS";
        cout<<countCollisions(directions);
    
    return 0;
}
