#include<iostream>
using namespace std;
int hashing(int key)
{
    return key%10;
}

int linearProb(int H[],int key)
{
    int index=hashing(key);
    int i=0;
    while((H[index+i]%10)!=0)
        i++;
    return (index+i)%10;
}

void insert(int H[],int key)
{
    int index;
    index=hashing(key);
    if(H[index]!=0)
        index=linearProb(H,key);
    H[index]=key;
}

int search(int H[],int key)
{
    int index = hashing(key);
    int i=0;
    while(H[(index+i)%10]!=key)
        i++;
    return (index+i)%10;
}
int main(){

    int HT[10]={0};

    insert(HT,10);
    insert(HT,21);
    insert(HT,32);
    insert(HT,42);
    insert(HT,51);
    insert(HT,64);
    insert(HT,84);
    int index = search(HT,84);
    cout<<HT[index]<<endl;
    index = search(HT,70);
    cout<<HT[index];
    return 0;
}