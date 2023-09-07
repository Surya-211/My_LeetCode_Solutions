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
    ListNode* reverse(ListNode* head)
    {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* tail=head->next;
        ListNode* ans=reverse(head->next);
        tail->next=head;
        head->next=NULL;
        return ans;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp=head;
        int count=1;
        ListNode* prev=NULL;
        ListNode* start=NULL;
        ListNode* end=NULL;
        while(temp!=NULL)
        {
            if(count==left)
                start=temp;
            if(count==right)
            {
                end=temp;
                temp=temp->next;
                break;
            }
            if(count<left)
            prev=temp;
            count++;
            temp=temp->next;
        }
        end->next=NULL;
        ListNode* rev=reverse(start);
        start->next=temp;
        if(left==1)
            return rev;
        else
        {
            prev->next=rev;
        }
        return head;
    }
};