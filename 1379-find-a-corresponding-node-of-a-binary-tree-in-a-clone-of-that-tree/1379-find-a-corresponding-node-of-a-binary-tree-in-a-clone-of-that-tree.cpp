/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*>q1;
        queue<TreeNode*>q2;
        q1.push(original);
        q2.push(cloned);
        while(!q1.empty())
        {
            TreeNode* front1=q1.front();
            q1.pop();
            TreeNode* front2=q2.front();
            q2.pop();
            if(front1==target)
                return front2;
            if(front1->left!=NULL)
            {
                q1.push(front1->left);
                q2.push(front2->left);
            }
            if(front1->right!=NULL)
            {
                q1.push(front1->right);
                q2.push(front2->right);
            }
            
        }
        return NULL;
    }
};