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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        int ind=0;
        ListNode* start=NULL;
        ListNode* t2=list2;
        while(t2->next!=NULL)
            t2=t2->next;
        while(temp!=NULL)
        {
            if(ind==a-1)
                start=temp;
            if(ind==b)
            {
                t2->next=temp->next;
                break;
            }
            ind++;
            temp=temp->next;      
        }
        if(a==0)
            return list2;
        else
        {
            start->next=list2;
        }
        return list1;
    }
};