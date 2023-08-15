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
    int gcd(int a,int b)
    {
        for(int i=min(a,b);i>=1;i--)
        {
            if(a%i==0 && b%i==0)
                return i;
        }
        return 1;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* dummy=new ListNode();
        ListNode* temp=dummy;
        while(head!=NULL)
        {
            if(head->next!=NULL)
            {
                int a=head->val;
                int b=head->next->val;
                int g=gcd(a,b);
                ListNode* t1=new ListNode(a);
                temp->next=t1;
                temp=temp->next;
                ListNode* t2=new ListNode(g);
                temp->next=t2;
                temp=temp->next;
                head=head->next;
            }
            else
            {
                temp->next=head;
                head=head->next;
            }
        }
        return dummy->next;
    }
};