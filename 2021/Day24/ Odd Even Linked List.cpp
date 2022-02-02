#include <bits/stdc++.h>
struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    void insert(ListNode** root,int value)
    {
        ListNode* temp = new ListNode();
        temp->val=value;
        temp->next=NULL;
        ListNode* p;
        if(*root==NULL)
        {
            *root=temp;
        }
        else
        {
            p=*root;
            while(p->next!=NULL)
            {
                p=p->next;
            }
            p->next=temp;
        }
    }
    ListNode* oddEvenList(ListNode* head) {
        ListNode* oddlist=head;
        ListNode* evenlist=head;
        ListNode* finalList;
        while(oddlist!=NULL)
        {
            if(oddlist->val%2!=0)
            {
                insert(&finalList,oddlist->val);
            }
            oddlist=oddlist->next;
        }
        while(evenlist!=NULL)
        {
            if(evenlist->val%2!=0)
            {
                insert(&finalList,evenlist->val);
            }
            evenlist=evenlist->next;
        }
        
        return finalList;
    }
};

int main()
{

    return 0;
}