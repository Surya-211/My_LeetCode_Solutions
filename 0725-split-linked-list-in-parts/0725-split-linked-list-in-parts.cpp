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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>v;
        ListNode* temp=head;
        int c=0;
        while(temp!=NULL)
        {
            c++;
            temp=temp->next;
        }
        temp=head;
        ListNode* t=head;
        ListNode* prev=NULL;
        if(c<k)
        {
            while(temp!=NULL)
            {
                temp=temp->next;
                t->next=NULL;
                v.push_back(t);
                t=temp;
            }
        }
        else
        {
        while(temp!=NULL)
        {
            if(c%k==0)
            {
                int n=c/k;
                int a=1;
                while(temp!=NULL && a<=n)
                {
                    prev=temp;
                    temp=temp->next;
                    a++;
                }
                c=c-n;
                prev->next=NULL;
                v.push_back(t);
                t=temp;
            }
            else
            {
                int n=c/k+1;
                int a=1;
                while(temp!=NULL && a<=n)
                {
                    prev=temp;
                    temp=temp->next;
                    a++;
                }
                c=c-n;
                prev->next=NULL;
                v.push_back(t);
                t=temp;
            }
            k--;
        }
        }
        for(int i=v.size();i<k;i++)
        {
            v.push_back(NULL);
        }
        return v;
    }
};