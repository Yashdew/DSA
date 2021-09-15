#include <bits/stdc++.h>

using namespace std;
string Binary(long long int n) 
{ 
    string s = bitset<64> (n).to_string(); 
    const auto loc1 = s.find('1'); 
      
    if(loc1 != string::npos) 
        return s.substr(loc1); 
      
    return "0"; 
}

int main()
{  
    long long int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int Cvalue=0;
        cin>>Cvalue;
        vector<long long int> A, B;
        string C = Binary(Cvalue);
        if(C.length()>1 && C[0]=='1')
        {
            if(C[0]=='1')
            {
                A.push_back(1);
                B.push_back(0);
            }
            for(long long int temp=1;temp<C.length();temp++)
            {
                if(C[temp]=='1')
                {
                    A.push_back(0);
                    B.push_back(1);
                }
                else if (C[temp]=='0')
                {
                    A.push_back(1);
                    B.push_back(1);
                }
            }
            string Astr,Bstr;
            for(long long int i=0;i<A.size();i++)
            {
                string stri = to_string(A[i]);
                Astr+=string(stri);
            }
            for(long long int i=0;i<B.size();i++)
            {
                string stri = to_string(B[i]);
                Bstr+=stri;
            }
            long long int Avalue = stoi(Astr,nullptr,2);
            
            long long int Bvalue = stoi(Bstr,nullptr,2);

            cout<<Avalue*Bvalue<<endl;
            A.clear();
            B.clear();
        }
        else if(C.size()==1 && C[0]=='1')
        {
            cout<<0<<endl;
        }
    }

    
    return 0;
}
