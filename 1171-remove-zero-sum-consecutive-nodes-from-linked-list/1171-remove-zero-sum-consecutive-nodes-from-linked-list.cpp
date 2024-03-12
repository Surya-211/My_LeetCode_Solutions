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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* f=new ListNode();
        f->next=head;
        ListNode* start=f;
        while(start!=NULL)
        {
            int prefix=0;
            ListNode* end=start->next;
            while(end!=NULL)
            {
                prefix+=end->val;
                if(prefix==0)
                {
                    start->next=end->next;
                }
                end=end->next;
            }
            start=start->next;
        }
        return f->next;
    }
};