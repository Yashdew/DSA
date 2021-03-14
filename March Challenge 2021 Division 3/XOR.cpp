#include <bits/stdc++.h>

using namespace std;
string decimalToBinary(long long int n) 
{ 
    string s = bitset<64> (n).to_string(); 
    const auto loc1 = s.find('1'); 
      
    if(loc1 != string::npos) 
        return s.substr(loc1); 
      
    return "0"; 
}
long long int binaryToDecimal(long long int n)
{
    long long int num = n;
    long long int dec_value = 0;

    long long int base = 1;
 
    long long int temp = num;
    while (temp) {
        long long int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
int main()
{  
    long long int testCases;
    cin >> testCases;
   
    while (testCases--)
    {
        long long int Cvalue=0;
        cin>>Cvalue;
        vector<long long int> Avalue, Bvalue;
        string Cbin = decimalToBinary(Cvalue);
        if(Cbin.length()>1 && Cbin[0]=='1')
        {
            if(Cbin[0]=='1')
            {
                Avalue.push_back(1);
                Bvalue.push_back(0);
            }
            for(long long int i=1;i<Cbin.length();i++)
            {
                if(Cbin[i]=='1')
                {
                    Avalue.push_back(0);
                    Bvalue.push_back(1);
                }
                else if (Cbin[i]=='0')
                {
                    Avalue.push_back(1);
                    Bvalue.push_back(1);
                }
            }
            string Astr,Bstr;
            for(long long int i=0;i<Avalue.size();i++)
            {
                string stri = to_string(Avalue[i]);
                Astr+=string(stri);
            }
            for(long long int i=0;i<Bvalue.size();i++)
            {
                string stri = to_string(Bvalue[i]);
                Bstr+=stri;
            }
            //cout<<Astr<<" "<<Bstr<<endl;
            long long int A = stoi(Astr,nullptr,2);
            
            long long int B = stoi(Bstr,nullptr,2);

            cout<<A*B;
            Avalue.clear();
            Bvalue.clear();
        }
        else if(Cbin.size()==1 && Cbin[0]=='1')
        {
            cout<<0<<endl;
        }
    }

    
    return 0;
}
