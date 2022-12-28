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
    void reorderList(ListNode* head) {
        reorder(head);        
    }
    void reorder(ListNode* head)
    {
        if(head==NULL||head->next==NULL)
            return;
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=NULL;
        temp->next=head->next;
        head->next=temp;
        reorder(temp->next);
        
    }
};