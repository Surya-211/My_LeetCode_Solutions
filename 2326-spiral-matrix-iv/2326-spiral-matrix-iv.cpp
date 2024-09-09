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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>>v(m,vector<int>(n,-1));
        int up=0;
        int down=0;
        int right=1;
        int left=0;
        int rs=0;
        int re=m-1;
        int cs=0;
        int ce=n-1;
        while(head!=NULL)
        {
            if(right==1)
            {
                for(int i=cs;i<=ce;i++)
                {
                    if(head!=NULL)
                    {
                        v[rs][i]=head->val;
                        head=head->next;
                    }
                    else
                        break;
                }
                right=0;
                down=1;
                rs+=1;
            }
            if(down==1)
            {
                for(int i=rs;i<=re;i++)
                {
                    if(head!=NULL)
                    {
                        v[i][ce]=head->val;
                        head=head->next;
                    }
                    else
                        break;
                }
                down=0;
                left=1;
                ce-=1;
            }
            if(left==1)
            {
                for(int i=ce;i>=cs;i--)
                {
                    if(head!=NULL)
                    {
                        v[re][i]=head->val;
                        head=head->next;
                    }
                    else
                        break;
                }
                left=0;
                up=1;
                re-=1;
            }
            if(up==1)
            {
                for(int i=re;i>=rs;i--)
                {
                    if(head!=NULL)
                    {
                        v[i][cs]=head->val;
                        head=head->next;
                    }
                    else
                        break;
                }
                right=1;
                up=0;
                cs+=1;
            }
        }
        return v;
    }
};