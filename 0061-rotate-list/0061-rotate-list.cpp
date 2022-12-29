/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL||head->next==NULL)
            return head;
        int s=0;
        ListNode* t=head;
        while(t!=NULL)
        {
            s++;
            t=t->next;
        }
        k=k%s;
        while(k--)
        {
            ListNode* temp=head;
            ListNode* prev=NULL;
            while(temp->next!=NULL)
            {
                prev=temp;
                temp=temp->next;
            }
            prev->next=NULL;
            temp->next=head;
            head=temp;
        }
        return head;
    }
};