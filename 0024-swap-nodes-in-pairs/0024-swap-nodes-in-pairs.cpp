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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        while(temp!=NULL&& temp->next!=NULL)
        {
            ListNode* t=temp->next;
            int num=temp->val;
            temp->val=t->val;
            t->val=num;
            temp=temp->next->next;
        }
        return head;
    }
};