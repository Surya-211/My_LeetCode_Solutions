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
    ListNode* merge(ListNode* left,ListNode* right)
    {
        if(left==NULL)
            return right;
        
        if(right==NULL)
            return left;
        
        ListNode* ans=new ListNode();
        ListNode* temp=ans;
        while(left!=NULL && right!=NULL)
        {
            if(left->val<right->val)
            {
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else
            {
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }
        while(left!=NULL)
        {
            temp->next=left;
            temp=left;
            left=left->next;
        }
        while(right!=NULL)
        {
            temp->next=right;
            temp=right;
            right=right->next;
        }
        return ans->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        ListNode* left=head;
        ListNode* right=slow->next;
        slow->next=NULL;
        left=sortList(left);
        right=sortList(right);
        ListNode* ans=merge(left,right);
        return ans;
    }
};