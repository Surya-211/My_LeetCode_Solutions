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
    TreeNode* bstToGst(TreeNode* root) {
        int s=0;
        sum(root,s);
        return root;
    }
    void sum(TreeNode* root,int& s)
    {
        if(root==NULL)
            return;
        sum(root->right,s);
        s=s+root->val;
        root->val=s;
        sum(root->left,s);
    }
};