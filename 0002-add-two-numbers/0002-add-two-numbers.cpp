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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL)
            return l2;
        if(l2==NULL)
            return l1;
        ListNode* ans=NULL;
        int carry=0;
        ListNode* prev=NULL;
        while(l1!=NULL&&l2!=NULL)
        {
            int sum=l1->val+l2->val+carry;
            carry=sum/10;
            int num=sum%10;
            ListNode* temp=new ListNode();
            temp->val=num;
            temp->next=NULL;
            if(ans==NULL)
            {
                prev=temp;
                ans=temp;
            }
            else
            {
                prev->next=temp;
                prev=temp;
            }
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL)
        {
            ListNode* temp=new ListNode();
            int sum=l1->val+carry;
            carry=sum/10;
            int num=sum%10;
            temp->val=num;
            temp->next=NULL;
            prev->next=temp;
            prev=temp;
            l1=l1->next;
        }
         while(l2!=NULL)
        {
            ListNode* temp=new ListNode();
            int sum=l2->val+carry;
            carry=sum/10;
            int num=sum%10;
            temp->val=num;
            temp->next=NULL;
            prev->next=temp;
            prev=temp;
            l2=l2->next;
        }
        if(carry==1)
        {
            ListNode* temp=new ListNode();
            temp->val=carry;
            temp->next=NULL;
            prev->next=temp;
        }
        return ans;
    }
};