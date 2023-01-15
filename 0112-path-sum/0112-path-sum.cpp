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
    int flag=0;
    bool hasPathSum(TreeNode* root, int targetSum) {
        path(root,targetSum);
        return flag;
    }
    void path(TreeNode* root,int sum)
    {
        if(root==NULL)
            return;
        if(root->val==sum&&root->left==NULL&&root->right==NULL)
        {
            flag=1;
            return;
        }
        path(root->left,sum-root->val);
        path(root->right,sum-root->val);
        
    }
};