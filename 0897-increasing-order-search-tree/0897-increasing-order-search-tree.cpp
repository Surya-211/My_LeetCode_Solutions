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
    vector<int>v;
    TreeNode* increasingBST(TreeNode* root) {
        
        if(root==NULL)
            return root;
        inorder(root);
        return build(0);
    }
    void inorder(TreeNode* root)
    {
        if(root==NULL)
            return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
    TreeNode* build(int i)
    {
        if(i==v.size())
            return NULL;
        TreeNode* root=new TreeNode(v[i]);
        i++;
        root->right=build(i);
        return root;
    }
};