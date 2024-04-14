/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int ans=0;
        queue<pair<TreeNode*,bool>>q;
        q.push({root,false});
        while(!q.empty())
        {
            pair<TreeNode*,bool>p=q.front();
            q.pop();
            if(p.first->left==NULL && p.first->right==NULL && p.second==true)
            {
                ans+=p.first->val;
            }
            else
            {
                if(p.first->left!=NULL)
                    q.push({p.first->left,true});
                if(p.first->right!=NULL)
                    q.push({p.first->right,false});
            }
        }
        return ans;
    }
};