#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

int main()
{

    Node *head = NULL;
    //Insert at last
    for (int i = 1; i < 6; i++)
    {
        Node *temp = new Node();
        temp->data = i;
        temp->next = NULL;
        if(head == NULL){
          head = temp;
        }else{
            Node *p=head;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=temp;
            //head->next = temp;
        }
    }


    Node *p = head;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }

    return 0;
}