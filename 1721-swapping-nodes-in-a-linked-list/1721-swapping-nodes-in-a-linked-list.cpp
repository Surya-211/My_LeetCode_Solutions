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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
        int n=v.size();
        int a=v[k-1];
        v[k-1]=v[n-k];
        v[n-k]=a;
        temp=head;
        int i=0;
        while(temp!=NULL)
        {
            temp->val=v[i];
            i++;
            temp=temp->next;
        }
        return head;
    }
};