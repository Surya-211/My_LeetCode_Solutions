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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        return head;
        ListNode* oddStart=head;
        ListNode* evenStart=head->next;
        ListNode* temp=head->next->next;
        ListNode* prev=evenStart;
        while(temp!=NULL)
        {
            ListNode* curr=temp;
            if(temp->next!=NULL)
            {
            temp=temp->next->next;
            }
            else
            temp=temp->next;
            prev->next=curr->next;
            prev=curr->next;
            oddStart->next=curr;
            oddStart=oddStart->next;
            curr->next=evenStart;
        }
        return head;
    }
};