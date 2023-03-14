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
    int sumNumbers(TreeNode* root) { 
        
        return sum(root,0);
        
    }
    
    int sum(TreeNode* root,int n)
    {
        if(root->left==NULL&&root->right==NULL)
            return n*10+root->val;
        
        if(root->left==NULL)
        {
            return sum(root->right,n*10+root->val);
        }
        
        if(root->right==NULL)
        {
            return sum(root->left,n*10+root->val);
        }
        
        return sum(root->left,n*10+root->val)+sum(root->right,n*10+root->val);
    }
};