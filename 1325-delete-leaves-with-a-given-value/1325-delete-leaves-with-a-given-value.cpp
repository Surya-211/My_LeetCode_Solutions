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
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        helper(root,root->left,target);
        helper(root,root->right,target);
        if(root->val==target && root->left==NULL && root->right==NULL)
            return NULL;
        return root;
    }
    
    void helper(TreeNode* parent,TreeNode* node,int target)
    {
        if(node!=NULL)
        {
            helper(node,node->left,target);
            helper(node,node->right,target);
        } 
        if(node!=NULL && node->val==target && node->left==NULL && node->right==NULL)
        {
            if(parent->right==node)
                parent->right=NULL;
            else
                parent->left=NULL;
        } 
    }
};