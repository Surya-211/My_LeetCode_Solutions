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
    int sum=0;
    int deepestLeavesSum(TreeNode* root) {
        int depth=helper(root);
        depthSum(root,depth);
        return sum;
    }
    int helper(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        int left=1+helper(root->left);
        int right=1+helper(root->right);
        return max(left,right);
    }
    void depthSum(TreeNode* root,int depth)
    {
        if(root==NULL)
            return;
        if(depth==1)
        {
            sum=sum+root->val;
            return;
        }
        depthSum(root->left,depth-1);
        depthSum(root->right,depth-1);
    }
    
};