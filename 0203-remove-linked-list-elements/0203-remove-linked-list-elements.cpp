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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        ListNode* prev=NULL;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(temp->val==val && temp==head)
            {
                head=head->next;
                temp=temp->next;
                continue;
            }
            else if(temp->val==val && temp->next==NULL)
            {
                prev->next=NULL;
                temp=temp->next;
                continue;
            }
            else if(temp->val==val)
            {
                prev->next=temp->next;
                temp=temp->next;
                continue;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
    }
};