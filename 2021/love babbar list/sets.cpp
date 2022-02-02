#include <bits/stdc++.h>
using namespace std;
int getnum(int nums)
{
    cin>>nums;
    return nums;
}
vector<int> getarray(vector<int> array,int nums)
{
    for(int i=0;i<nums;i++)
    {
        int temp;
        cin>>temp;
        array.push_back(temp);
    }
    return array;
}
void print(vector<int> array,int nums)
{
    for(int i=0;i<nums;i++)
    {
        cout<<array[i]<<" ";
    }
}
vector<int> unionset(vector<int> A,int numsA,vector<int> B,int numsB)
{
    vector<int> array;
    for(int i=0;i<numsA;i++)
        array.push_back(A[i]);
    
    for(int i=0;i<numsB;i++)
    {
        int count=0,K=0;
        for(int j=0;j<numsA;j++)
        {
            if(B[i]==A[j])
            {
                K=i;
                count=1;
                break;
            }
            if(count==0)
            {
                array.push_back(B[i]);
            }
        }
        
    }
    return array;
}
vector<int> Insersection(vector<int> A,int numsA,vector<int> B,int numsB)
{
    vector<int> C;
    int i=0,j=0;
    while( i < numsA && j < numsB )
    {
        if(A[i]<B[j])
            i++;
        else if(A[i]>B[j])
            j++;
        else
        {
            C.push_back(A[i]);
            i++;
            j++;
        }
    }
    //print(C,C.size());
    return C;
}
vector<int> difference1(vector<int> A,int numsA,vector<int> B,int numsB)
{
    vector<int> C;
    vector<int> D = Insersection(A,numsA,B,numsB);
    
    for(int i=0;i<numsA;i++)
    {
        int flag=0;
        for(int j=0;j<D.size();j++)
        {
            if(A[i]==D[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            C.push_back(A[i]);
        }
    }

    return C;
}
int main()
{  
    int numsA,numsB;
    numsA=getnum(numsA);
    numsB=getnum(numsB);
    vector<int> ArrA;
    ArrA = getarray(ArrA, numsA);
    vector<int> ArrB;
    ArrB = getarray(ArrB, numsB);
    //vector<int> arrayC = unionset(ArrA,numsA,ArrB,numsB);
    //vector<int> arrayC = Insersection(ArrA,numsA,ArrB,numsB);
    vector<int> arrayC = difference1(ArrA,numsA,ArrB,numsB);
    print(arrayC,arrayC.size());
    return 0;
}
