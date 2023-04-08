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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        
        if(root==p || root==q)
            return root;
        
        int l=lowest(root->left,p,q);
        int r=lowest(root->right,p,q);
        
        if(l==1&&r==1)
            return root;
        
        if(l==1)
            return lowestCommonAncestor(root->left,p,q);
        else
            return lowestCommonAncestor(root->right,p,q);
    }
    
    int lowest(TreeNode* root,TreeNode* p,TreeNode* q)
    {
        if(root==NULL)
            return 0;
        if(root==p || root==q)
            return 1;
        return lowest(root->left,p,q)||lowest(root->right,p,q);
    }
};