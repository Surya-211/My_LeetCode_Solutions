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
    
    int maxi=INT_MIN;
    
    int maxPathSum(TreeNode* root) {
        
        int m=sum(root);
        return maxi;
        
    }
    
    int sum(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int l=sum(root->left);
        int r=sum(root->right);
        int s=root->val+l+r;
        maxi=max(maxi,s);
        int m=max(l,r)+root->val;
        if(m>=0)
            return m;
        else
            return 0;
    }
};