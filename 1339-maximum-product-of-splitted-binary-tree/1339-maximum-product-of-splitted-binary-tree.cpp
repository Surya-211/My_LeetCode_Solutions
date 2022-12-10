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
    long int totalsum=0;
    long int m=0;
    int mod=(int)(pow(10,9)+7);
    int maxProduct(TreeNode* root) {
        sum(root);
        dfs(root);
        return m%mod;
    }
    void sum(TreeNode* root)
    {
        if(root==NULL)
            return;
        totalsum+=root->val;
        sum(root->left);
        sum(root->right);
    }
    long int dfs(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int sum=root->val+dfs(root->left)+dfs(root->right);
        if((totalsum-sum)*sum>m)
            m=(totalsum-sum)*sum;
        
        return sum;
    }
    
};