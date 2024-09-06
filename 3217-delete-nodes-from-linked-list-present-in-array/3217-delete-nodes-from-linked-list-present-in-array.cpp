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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        ListNode* dummy=new ListNode();
        dummy->next=head;
        ListNode* temp=dummy->next;
        ListNode* prev=dummy;
        while(temp!=NULL)
        {
            if(m[temp->val]==0)
            {
                prev->next=temp;
                prev=temp;
            }
            temp=temp->next;
        }
        prev->next=NULL;
        return dummy->next;
    }
};