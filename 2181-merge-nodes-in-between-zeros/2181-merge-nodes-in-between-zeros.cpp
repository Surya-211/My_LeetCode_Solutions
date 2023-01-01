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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* hans=NULL;
        ListNode* ans=NULL;
        int sum=0;
        head=head->next;
        while(head!=NULL)
        {
            if(head->val!=0)
            {
                sum+=head->val;
                head=head->next;
                continue;
            }
            ListNode* temp=new ListNode(sum);
            if(hans==NULL)
            {
                hans=temp;
                ans=temp;
            }
            else
            {
                ans->next=temp;
                ans=ans->next;
            }
            sum=0;
            head=head->next;
        }
        return hans;
    }
};