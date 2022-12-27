/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        set<ListNode*>s;
        while(head!=NULL)
        {
            if(s.find(head)==s.end())
                s.insert(head);
            else
                return head;
            head=head->next;
        }
        return NULL;
    }
};